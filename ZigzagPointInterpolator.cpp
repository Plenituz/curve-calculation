#include "ZigzagPointInterpolator.h"
#include <math.h>
#include <cassert>
#include <iostream>
#include "ZigzagPoint.h"
#include "LinearInterpolator.h"

using namespace std;

Point ZigzagPointInterpolator::interpolate(ICurvePoint* from, ICurvePoint* to, double t)
{
    ZigzagPoint* fromP = dynamic_cast<ZigzagPoint*>(from);
    ZigzagPoint* toP = dynamic_cast<ZigzagPoint*>(to);

    assert(fromP != nullptr);
    assert(toP != nullptr);
    return interpolate(*fromP, *toP, t);
}

Point ZigzagPointInterpolator::interpolate(ZigzagPoint from, ZigzagPoint to, double t)
{
    Vector right = to.position - from.position;
    double rightMg = right.magnitude();
    double distanceToGo = rightMg * t;
    
    //normalize
    right = right / rightMg;
    //up is therefore normalized too
    Vector up = Vector(-right.y, right.x);
    //put back at right length
    right = right * distanceToGo;
    
    double freq = LinearInterpolator::LinearInterpolation(from.frequency, to.frequency, t);
    double ampl = LinearInterpolator::LinearInterpolation(from.amplitude, to.amplitude, t);
    
    up = up * cos(t*freq) * ampl;
        
    Vector res = right + up;
    return from.position + res;
}