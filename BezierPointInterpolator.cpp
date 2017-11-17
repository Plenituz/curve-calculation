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
    
    ZigzagPointInterpolator interZ = ZigzagPointInterpolator();
    LinearPointInterpolator interP = LinearPointInterpolator();
    
    Point zig = interZ.interpolate(ZigzagPoint(from.position, 20, 5), ZigzagPoint(to.position, 20, 5), t);
    Point lin = interP.interpolate(from.position, to.position, t);
    Vector up = zig - lin;
    double mg = up.magnitude();
    
    if(t == 0)
        t = 0.01;
    
    
    Point p1 = BezierPointInterpolator::getBezierPoint(from.position, from.rightHandle, to.leftHandle, to.position, t-0.01);
    Point p2 = BezierPointInterpolator::getBezierPoint(from.position, from.rightHandle, to.leftHandle, to.position, t);
    Vector tangent = p2 - p1;
    tangent.normalize();
    
    Vector rot = Vector(-tangent.y, tangent.x);
    rot = rot * mg;
    
   // std::cout << (p2 + rot).toString() << std::endl;
    
    return p2 + rot;
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
