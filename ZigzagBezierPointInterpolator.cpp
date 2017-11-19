#include "ZigzagBezierPointInterpolator.h"
#include "ZigzagBezierPoint.h"
#include "ZigzagPointInterpolator.h"
#include "BezierPointInterpolator.h"
#include <cassert>


Point ZigzagBezierPointInterpolator::interpolate(ICurvePoint* from, ICurvePoint* to, double t)
{
    ZigzagBezierPoint* fromP = dynamic_cast<ZigzagBezierPoint*>(from);
    ZigzagBezierPoint* toP = dynamic_cast<ZigzagBezierPoint*>(to);

    assert(fromP != nullptr);
    assert(toP != nullptr);
    return interpolate(*fromP, *toP, t);
}

Point ZigzagBezierPointInterpolator::interpolate(ZigzagBezierPoint from, ZigzagBezierPoint to, double t)
{
    ZigzagPointInterpolator interZ = ZigzagPointInterpolator();
    
    Point zig = interZ.interpolate(ZigzagPoint(Point(), from.frequency, from.amplitude), 
        ZigzagPoint(Point(100, 0), to.frequency, to.amplitude), t);
    double mg = zig.y;
    
    //make sure we don't fetch 0 - step 
    if(t == 0)
        t = 0.01;
    
    
    Point p1 = BezierPointInterpolator::getBezierPoint(from.position, from.rightHandle, to.leftHandle, to.position, t-0.01);
    Point p2 = BezierPointInterpolator::getBezierPoint(from.position, from.rightHandle, to.leftHandle, to.position, t);
    Vector tangent = p2 - p1;
    tangent.normalize();
    
    Vector rot = Vector(-tangent.y, tangent.x);
    rot = rot * mg;

    return p2 + rot;
}