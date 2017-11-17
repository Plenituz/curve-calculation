#ifndef ZIGZAGBEZIERPOINT
#define ZIGZAGBEZIERPOINT

#include "Point.h"
#include "Vector.h"
#include "ICurvePoint.h"

class ZigzagBezierPoint : public ICurvePoint
{
public:
//public for simplicity sake
    Point position;
    Point rightHandle;
    Point leftHandle;
    double frequency;
    double amplitude;

    ZigzagBezierPoint() : position(Point()), rightHandle(Point()), leftHandle(Point()), frequency(50), amplitude(20){}
    ZigzagBezierPoint(Point p, Point right, Point left) : position(p), rightHandle(right), leftHandle(left), frequency(50), amplitude(20){}
    ZigzagBezierPoint(Point p, Point right, Point left, double freq, double ampl) 
        : position(p), rightHandle(right), leftHandle(left), frequency(freq), amplitude(ampl){}


    ~ZigzagBezierPoint(){}
};

#endif