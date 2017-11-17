#ifndef ICURVEPOINT
#define ICURVEPOINT

class ICurvePoint {
public:
    virtual double distanceTo(ICurvePoint* other) = 0;
};

#endif // ICURVEPOINT

