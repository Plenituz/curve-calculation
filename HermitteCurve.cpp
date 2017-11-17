#include "HermitteCurve.h"
#include "HermittePointInterpolator.h"


HermittePointInterpolator* HermitteCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new HermittePointInterpolator();
    return _interpolator;
}

void HermitteCurve::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}

void HermitteCurve::addPoint(BezierCurvePoint point)
{
    addPoint(&point);
}

