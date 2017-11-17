#ifndef ZIGZAGBEZIERPOINTITER
#define ZIGZAGBEZIERPOINTITER

#include "MathPointInterpolator.h"
#include "ZigzagBezierPoint.h"

class ZigzagBezierPointInterpolator : public MathPointInterpolator
{
private:
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
public:
    virtual Point interpolate(ZigzagBezierPoint from, ZigzagBezierPoint to, double t);
};

#endif