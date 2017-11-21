#ifndef BEZIERCURVE
#define BEZIERCURVE

#include "ICurve.h"
#include "BezierCurvePoint.h"
#include "CurvePointInterpolator.h"

class BezierCurve : public ICurve
{
private:
    virtual CurvePointInterpolator* interpolator();
    virtual void addPoint(ICurvePoint* point);
protected:
    CurvePointInterpolator* _interpolator;
public:
    void addPoint(BezierCurvePoint point);
};


#endif
