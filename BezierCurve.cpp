#include "BezierCurve.h"
#include "BezierPointInterpolator.h"


CurvePointInterpolator* BezierCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new BezierPointInterpolator();
    return _interpolator;
}

void BezierCurve::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}

void BezierCurve::addPoint(BezierCurvePoint point)
{
    addPoint(&point);
}
