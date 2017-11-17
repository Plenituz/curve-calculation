#ifndef BEZIERPOITINTERPOLATOR
#define BEZIERPOITINTERPOLATOR

#include "CurvePointInterpolator.h"
#include "LinearInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "BezierCurvePoint.h"

class BezierPointInterpolator : public CurvePointInterpolator{
private:
    LinearInterpolator interpolator;
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
    static Point getBezierPoint(Point start, Point first, Point second, Point end, double t);
public:
    Point interpolate(BezierCurvePoint from, BezierCurvePoint to, double t);
};

#endif