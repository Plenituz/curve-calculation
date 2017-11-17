#ifndef BEZIERPOITINTERPOLATOR
#define BEZIERPOITINTERPOLATOR

#include "MathPointInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "BezierCurvePoint.h"

class BezierPointInterpolator : public MathPointInterpolator{
private:
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
    static Point getBezierPoint(Point start, Point first, Point second, Point end, double t);
public:
    virtual Point interpolate(BezierCurvePoint from, BezierCurvePoint to, double t);
};

#endif
