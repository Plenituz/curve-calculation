#ifndef HERMITTECURVE
#define HERMITTECURVE

#include "ICurve.h"
#include "BezierCurvePoint.h"
#include "HermittePointInterpolator.h"

class HermitteCurve : public ICurve
{
private:
    HermittePointInterpolator* _interpolator;
    virtual HermittePointInterpolator* interpolator();
    virtual void addPoint(ICurvePoint* point);
public:
    void addPoint(BezierCurvePoint point);
};


#endif
