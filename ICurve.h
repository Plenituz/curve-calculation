#ifndef ICURVE
#define ICURVE

#include <vector>
#include "ICurvePoint.h"
#include "LinearInterpolator.h"
#include "CurvePointInterpolator.h"
#include "IInterpolator.h"
using namespace std;

class ICurve {
protected:
    vector<ICurvePoint*> points;
    virtual CurvePointInterpolator* interpolator() = 0;
    virtual double measureCurve();

public:
    virtual void addPoint(ICurvePoint* point) = 0;
    ICurve();
    ~ICurve();
    virtual Point pointAtPercent(double percent);
};

#endif // ICURVE
