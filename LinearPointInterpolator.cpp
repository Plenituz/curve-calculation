#include "LinearPointInterpolator.h"
#include "Point.h"
#include "ICurvePoint.h"
#include <cassert>
#include <iostream>
using namespace std;

Point LinearPointInterpolator::interpolate(ICurvePoint* from, ICurvePoint* to, double t)
{
    //dynamic_cast returns nullptr for some reason so I ninjated
    Point* fromP = dynamic_cast<Point*>(from);
    Point* toP = dynamic_cast<Point*>(to);

    assert(fromP != nullptr);
    assert(toP != nullptr);
    return interpolate(*fromP, *toP, t);
}

Point LinearPointInterpolator::interpolate(Point from, Point to, double t)
{
    cout << "from:" << from.toString() << endl;
    cout << "to:" << to.toString() << endl;

    double x = interpolator.interpolate(from.x, to.x, t);
    double y = interpolator.interpolate(from.y, to.y, t);
    double z = interpolator.interpolate(from.z, to.z, t);
    cout << "result:" << x << " " << y << endl << endl;
    return Point(x, y, z);
}

double LinearPointInterpolator::distanceBetween(ICurvePoint* from, ICurvePoint* to)
{
    Point* fromP = dynamic_cast<Point*>(from);
    Point* toP = dynamic_cast<Point*>(to);
    assert(fromP != nullptr);
    assert(fromP != nullptr);

    return Point::distance(*fromP, *toP);
}
