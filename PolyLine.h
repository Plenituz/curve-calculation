#ifndef POLYLINE
#define POLYLINE

#include "ICurve.h"
#include "Point.h"
#include "ICurvePoint.h"

class PolyLine : public ICurve{
private:
    void addPoint(ICurvePoint* point);
    CurvePointInterpolator* _interpolator;
    virtual CurvePointInterpolator* interpolator();
public:
    void addPoint(Point point);
};

#endif
