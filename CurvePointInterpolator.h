#ifndef POINTINTER
#define POINTINTER
#include "ICurvePoint.h"
#include "Point.h"
#include "IInterpolator.h"

class CurvePointInterpolator : public IInterpolator<Point, ICurvePoint*>{
public:
    virtual Point interpolate(ICurvePoint* from, ICurvePoint* to, double t) = 0;
    virtual double distanceBetween(ICurvePoint* from, ICurvePoint* to) = 0;
};
#endif // POINTINTER
