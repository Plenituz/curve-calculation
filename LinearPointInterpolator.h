#ifndef LINEARPOINT
#define LINEARPOINT

#include "CurvePointInterpolator.h"
#include "LinearInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"


class LinearPointInterpolator : public CurvePointInterpolator{
private:
    LinearInterpolator interpolator;
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
public:
    Point interpolate(Point from, Point to, double t);
};

#endif
