#include "ZigzagBezierPointInterpolator.h"
#include "ZigzagBezierPoint.h"
#include "ZigzagPointInterpolator.h"


Point interpolate(ICurvePoint* from, ICurvePoint* to, double t)
{
    ZigzagBezierPoint* fromP = dynamic_cast<ZigzagBezierPoint*>(from);
    ZigzagBezierPoint* toP = dynamic_cast<ZigzagBezierPoint*>(to);

    assert(fromP != nullptr);
    assert(toP != nullptr);
    return interpolate(*fromP, *toP, t);
}

Point interpolate(ZigzagBezierPoint from, ZigzagBezierPoint to, double t)
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


}