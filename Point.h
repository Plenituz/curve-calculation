#ifndef POINT
#define POINT

#include "Vector.h"
#include "ICurvePoint.h"
#include <string>

class Point : public ICurvePoint
{
public:
    double x;
    double y;
    double z;
    Point();
    Point(double x, double y);
    Point(double x, double y, double z);
    ~Point();
    Point operator+(const Vector& v);
    Point operator+(const Point& v);
    Vector operator-(const Point& v);
    Point operator*(const double& v);
    std::string toString();
    static double distance(Point x1, Point y1);
    virtual double distanceTo(ICurvePoint* other);
};
#endif

