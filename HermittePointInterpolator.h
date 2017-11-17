#ifndef HERMITTEPOITINTERPOLATOR
#define HERMITTEPOITINTERPOLATOR

#include "CurvePointInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "BezierCurvePoint.h"
#include "BezierPointInterpolator.h"

class HermittePointInterpolator : public BezierPointInterpolator{
private:
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
    Point getHermittePoint(Point start, Point first, Point second, Point end, double t);
public:
    Point interpolate(BezierCurvePoint from, BezierCurvePoint to, double t);
};

#endif
