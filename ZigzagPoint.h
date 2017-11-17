#ifndef ZIGZAGPOINT
#define ZIGZAGPOINT

#include "Point.h"
#include "Vector.h"
#include "ICurvePoint.h"

class ZigzagPoint : public ICurvePoint
{
public:
//public for simplicity sake
    Point position;
    double frequency;
    double amplitude;

    ZigzagPoint() : position(Point()), frequency(50), amplitude(20){}
    ZigzagPoint(Point p) : position(p), frequency(50), amplitude(20){}
    ZigzagPoint(Point p, double freq, double ampl): position(p), frequency(freq), amplitude(ampl){}
    ~ZigzagPoint(){}
};

#endif