#include "ZigzagCurve.h"
#include "ZigzagPointInterpolator.h"
#include "ICurvePoint.h"
#include "CurvePointInterpolator.h"

CurvePointInterpolator* ZigzagCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new ZigzagPointInterpolator();
    return _interpolator;
}

void ZigzagCurve::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}

void ZigzagCurve::addPoint(ZigzagPoint point)
{
    addPoint(&point);
}