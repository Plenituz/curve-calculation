#ifndef BEZIERPOITINTERPOLATOR
#define BEZIERPOITINTERPOLATOR

#include "MathPointInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "BezierCurvePoint.h"

class BezierPointInterpolator : public MathPointInterpolator{
private:
    Point interpolate(ICurvePoint* from, ICurvePoint* to, double t);
public:
    static Point getBezierPoint(Point start, Point first, Point second, Point end, double t);
    virtual Point interpolate(BezierCurvePoint from, BezierCurvePoint to, double t);
};

#endif
