#ifndef LINEARINT
#define LINEARINT

#include "IInterpolator.h"
#include <iostream>


class LinearInterpolator : public IInterpolator<double, double>{
public:
    double interpolate(double from, double to, double t);
    static double LinearInterpolation(double from, double to, double t);
    static double InverseLinear(double val, double start, double end);
};

#endif
