#include "HermitteCurve.h"
#include "HermittePointInterpolator.h"


HermittePointInterpolator* HermitteCurve::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new HermittePointInterpolator();
    return _interpolator;
}

