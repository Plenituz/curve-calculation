#include "ICurve.h"
#include "LinearInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"

#include <iostream>

using namespace std;

double ICurve::measureCurve()
{
    if(points.size() <= 1)
        return 0;

    double distance = 0;
    for(uint i = 1; i < points.size(); i++)
    {
        distance += points[i-1]->distanceTo(points[i]);
        //distance += distanceOnCurve(points[i-1], points[i]);
    }
    return distance;
}

ICurve::ICurve(){
    
}

ICurve::~ICurve(){
    
}

Point ICurve::pointAtPercent(double percent)
{
    if(points.size() == 0)
        return Point();
    if(points.size() == 1){
        ICurvePoint* p = points[0];
        return interpolator()->interpolate(p, p, 0);
    }

    ICurvePoint* from;
    ICurvePoint* to;
    double startPercent, endPercent;
    bool found = false;

    double lengthPath = measureCurve();
    double wantedDist = lengthPath * percent;
    double currentDist = 0;
    for(uint i = 1 ; i < points.size(); i++)
    {
        startPercent = currentDist / lengthPath;
        currentDist += points[i-1]->distanceTo(points[i]);
        //currentDist += distanceOnCurve(points[i-1], points[i]);
        if(currentDist > wantedDist)
        {
            endPercent = currentDist / lengthPath;
            from = points[i-1];
            to = points[i];
            found = true;
            break;
        }
    }
    if(!found)
    {
        std::cout << "error point not found";
        return Point();
    }

    double localPercent = LinearInterpolator::InverseLinear(percent, startPercent, endPercent);
    //cout << "start percent:" << startPercent << " end percent:" << endPercent << endl;
    //cout << "local percent:" << localPercent << endl;
    return interpolator()->interpolate(from, to, localPercent);
}