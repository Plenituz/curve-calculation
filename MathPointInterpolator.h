#ifndef MATHPOITINTERPOLATOR
#define MATHPOITINTERPOLATOR

#include "CurvePointInterpolator.h"
#include "LinearInterpolator.h"
#include "ICurvePoint.h"

class MathPointInterpolator : public CurvePointInterpolator{
private:
    double distanceBetween(ICurvePoint* from, ICurvePoint* to);
};

#endif
