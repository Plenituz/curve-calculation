#ifndef ZIGZAGPOINTITER
#define ZIGZAGPOINTITER

#include "MathPointInterpolator.h"
#include "ZigzagPoint.h"

class ZigzagPointInterpolator : public MathPointInterpolator
{
private:
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
public:
    virtual Point interpolate(ZigzagPoint from, ZigzagPoint to, double t);
};

#endif