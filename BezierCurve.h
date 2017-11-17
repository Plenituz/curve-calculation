#ifndef BEZIERCURVE
#define BEZIERCURVE

#include "ICurve.h"
#include "BezierCurvePoint.h"

class BezierCurve : public ICurve
{
private:
    virtual CurvePointInterpolator* interpolator();
    virtual void addPoint(ICurvePoint* point);
public:
    void addPoint(BezierCurvePoint point);
};


#endif