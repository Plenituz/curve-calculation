#include "BezierPointInterpolator.h"
#include <cassert>
#include <iostream>

#include "ZigzagPoint.h"
#include "ZigzagPointInterpolator.h"
#include "BezierCurvePoint.h"
#include "LinearPointInterpolator.h"

Point BezierPointInterpolator::interpolate(ICurvePoint* from, ICurvePoint* to, double t)
{
    BezierCurvePoint* fromP = dynamic_cast<BezierCurvePoint*>(from);
    BezierCurvePoint* toP = dynamic_cast<BezierCurvePoint*>(to);

    assert(fromP != nullptr);
    assert(toP != nullptr);
    return interpolate(*fromP, *toP, t);
}

Point BezierPointInterpolator::interpolate(BezierCurvePoint from, BezierCurvePoint to, double t)
{
    return BezierPointInterpolator::getBezierPoint(from.position, from.rightHandle, to.leftHandle, to.position, t);
}

Point BezierPointInterpolator::getBezierPoint(
    Point start, Point first,
    Point second, Point end, double t)
{
    double omt = 1.0 - t;
    double omt2 = omt * omt;
    double t2 = t * t;
    return start * (omt2 * omt) +
           first * (3.0 * omt2 * t) +
           second * (3.0 * omt * t2) +
           end * (t2 * t);
}
