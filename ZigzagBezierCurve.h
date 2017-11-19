#ifndef ZIGZAGBEZIERCURVE
#define ZIGZAGBEZIERCURVE

#include "ICurve.h"
#include "ICurvePoint.h"
#include "ZigzagBezierPoint.h"
#include "CurvePointInterpolator.h"

class ZigzagBezierCurve : public ICurve{
private:
    void addPoint(ICurvePoint* point);
    CurvePointInterpolator* _interpolator;
    virtual CurvePointInterpolator* interpolator();
public:
    void addPoint(ZigzagBezierPoint point);
};

#endif