#ifndef BEZIERPOINT
#define BEZIERPOINT

#include "Point.h"
#include "Vector.h"
#include "ICurvePoint.h"

class BezierCurvePoint : public ICurvePoint
{
public:
    Point position;
    Point rightHandle;
    Point leftHandle;

    BezierCurvePoint() : position(Point()), rightHandle(Point()), leftHandle(Point()){}
    BezierCurvePoint(Point p) : position(p), rightHandle(Point()), leftHandle(Point()){}
    BezierCurvePoint(Point p, Point right) : position(p), rightHandle(right){}
    BezierCurvePoint(Point p, Point right, Point left): position(p), rightHandle(right), leftHandle(left){}
    ~BezierCurvePoint(){}
};

#endif
