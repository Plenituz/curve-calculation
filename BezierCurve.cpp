#include "BezierCurve.h"
#include "BezierPointInterpolator.h"


CurvePointInterpolator* BezierCurve::interpolator()
{
    return new BezierPointInterpolator();
}

void BezierCurve::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}

void BezierCurve::addPoint(BezierCurvePoint point)
{
    addPoint(&point);
}