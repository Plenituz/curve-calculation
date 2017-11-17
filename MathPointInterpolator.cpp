#include "MathPointInterpolator.h"

double MathPointInterpolator::distanceBetween(ICurvePoint* from, ICurvePoint* to)
{
    double distance = 0;
    double step = 0.001;
    for(double i = step; i < 1; i += step)
    {
        Point p1 = interpolate(from, to, i-step);
        Point p2 = interpolate(from, to, i);

        distance += Point::distance(p1, p2);
    }
    return distance;
}

