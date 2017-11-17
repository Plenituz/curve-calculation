#ifndef ZIGZAGCURVE
#define ZIGZAGCURVE

#include "ICurve.h"
#include "ICurvePoint.h"
#include "ZigzagPoint.h"

class ZigzagCurve : public ICurve{
private:
    void addPoint(ICurvePoint* point);
    CurvePointInterpolator* _interpolator;
    virtual CurvePointInterpolator* interpolator();
public:
    void addPoint(ZigzagPoint point);
};

#endif