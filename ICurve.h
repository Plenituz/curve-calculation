#ifndef ICURVE
#define ICURVE

#include <vector>
#include "ICurvePoint.h"
#include "LinearInterpolator.h"
#include "CurvePointInterpolator.h"
#include "IInterpolator.h"
#include <map>
using namespace std;

class ICurve {
protected:
    vector<ICurvePoint*> points;
    map<int, double> distanceToNextCache;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ;
    virtual CurvePointInterpolator* interpolator() = 0;
    virtual double measureCurve();
    virtual double distanceToNext(int pIndex);

public:
    virtual void removeAt(uint index);
    virtual void addPoint(ICurvePoint* point) = 0;
    ICurve();
    ~ICurve();
    virtual Point pointAtPercent(double percent);
};

#endif // ICURVE
