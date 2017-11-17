#ifndef BEZIERCURVE
#define BEZIERCURVE

#include "ICurve.h"
#include "BezierCurvePoint.h"
#include "CurvePointInterpolator.h"

class BezierCurve : public ICurve
{
private:
    CurvePointInterpolator* _interpolator;
    virtual CurvePointInterpolator* interpolator();
    virtual void addPoint(ICurvePoint* point);
public:
    void addPoint(BezierCurvePoint point);
};


#endif
