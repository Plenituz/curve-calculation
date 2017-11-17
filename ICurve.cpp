#include "ICurve.h"
#include "LinearInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "PointNotFoundException.h"

#include <iostream>

using namespace std;

double ICurve::measureCurve()
{
    if(points.size() <= 1)
        return 0;

    double distance = 0;
    for(uint i = 1; i < points.size(); i++)
    {
        distance += distanceToNext(i-1);
    }
    return distance;
}

/**
    careful this doesn't check if the point and next point exist
    This caches the distance so it's only calculated once
*/
double ICurve::distanceToNext(int pIndex)
{
    auto cached = distanceToNextCache.find(pIndex);
    if(cached != distanceToNextCache.end()) {
        //found
        return cached->second;
    }
    else {
        //not found
        double value = interpolator()->distanceBetween(points[pIndex], points[pIndex+1]);
        distanceToNextCache[pIndex] = value;
        return value;
    }
}

ICurve::ICurve(){

}

ICurve::~ICurve(){

}

Point ICurve::pointAtPercent(double percent)
{
    if(points.size() == 0)
        return Point();
    if(points.size() == 1)
        return interpolator()->interpolate(points[0], points[0], 0);


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
        currentDist += distanceToNext(i-1);
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
        //could check if percent is between 0 and 1 but you never know
        //what might cause a point to be not found
        throw PointNotFoundException();
    }

    double localPercent = LinearInterpolator::InverseLinear(percent, startPercent, endPercent);
    return interpolator()->interpolate(from, to, localPercent);
}
