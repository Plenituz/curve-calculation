#include "LinearInterpolator.h"

double LinearInterpolator::interpolate(double from, double to, double t)
{
    return LinearInterpolator::LinearInterpolation(from, to, t);
}

double LinearInterpolator::LinearInterpolation(double from, double to, double t)
{
    return (to - from) * t + from;
}

double LinearInterpolator::InverseLinear(double val, double start, double end)
{
    if (start == end)
        return 0;
    return (val - start) / (end - start);
}

