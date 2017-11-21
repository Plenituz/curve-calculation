#ifndef HERMITTECURVE
#define HERMITTECURVE

#include "ICurve.h"
#include "BezierCurvePoint.h"
#include "HermittePointInterpolator.h"
#include "BezierCurve.h"

class HermitteCurve : public BezierCurve
{
private:
    virtual CurvePointInterpolator* interpolator();
};


#endif
