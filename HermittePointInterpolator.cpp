#include "HermittePointInterpolator.h"
#include <cassert>

Point HermittePointInterpolator::interpolate(BezierCurvePoint from, BezierCurvePoint to, double t)
{
    return getHermittePoint(from.position, from.rightHandle, to.leftHandle, to.position, t);
}

Point HermittePointInterpolator::getHermittePoint(Point start, Point first, Point second, Point end, double t)
{
    double t2 = t*t;
    double t3 = t*t*t;
    double twot3 = 2*t3;
    double threet2 = 3*t2;

    return start * (twot3 - threet2 + 1)
        + first * (t3 - 2*t2 + t)
        + end * (-twot3 + threet2)
        + second * (t3 - t2);
}
