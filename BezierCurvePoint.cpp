#include "BezierCurvePoint.h"
#include "ICurvePoint.h"
#include "BezierPointInterpolator.h"
#include <cassert>

double BezierCurvePoint::distanceTo(ICurvePoint* other)
{
    BezierCurvePoint* otherP = dynamic_cast<BezierCurvePoint*>(other);
    assert(otherP != nullptr);
    
    BezierPointInterpolator interpolator = BezierPointInterpolator();
    double distance = 0;
    double step = 0.001;
    for(double i = step; i < 1; i += step)
    {
        Point p1 = interpolator.interpolate(*this, *otherP, i-step);
        Point p2 = interpolator.interpolate(*this, *otherP, i);
        
        distance += Point::distance(p1, p2);
    }
    return distance;
}