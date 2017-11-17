#include "PolyLine.h"
#include "Point.h"
#include "ICurvePoint.h"
#include "LinearPointInterpolator.h"
#include <cassert>
#include <iostream>

void PolyLine::addPoint(ICurvePoint* point)
{
    points.push_back(point);
}

CurvePointInterpolator* PolyLine::interpolator()
{
    if(_interpolator == nullptr)
        _interpolator = new LinearPointInterpolator();
    return _interpolator;
}

void PolyLine::addPoint(Point point)
{
    addPoint(&point);
}