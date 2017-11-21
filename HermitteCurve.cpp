#include "HermitteCurve.h"
#include "HermittePointInterpolator.h"


CurvePointInterpolator* HermitteCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new HermittePointInterpolator();
    return _interpolator;
}

