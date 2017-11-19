#include "ZigzagBezierCurve.h"
#include "ICurvePoint.h"
#include "ZigzagPoint.h"
#include "CurvePointInterpolator.h"
#include "ZigzagBezierPointInterpolator.h"
#include "ZigzagBezierPoint.h"

void ZigzagBezierCurve::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}


CurvePointInterpolator* ZigzagBezierCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new ZigzagBezierPointInterpolator();
    return _interpolator;
}

void ZigzagBezierCurve::addPoint(ZigzagBezierPoint point)
{
    addPoint(&point);
}