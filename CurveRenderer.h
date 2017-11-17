#ifndef CURVERENDER
#define CURVERENDER

#include "ICurve.h"
#include <fstream>

class CurveRenderer{
public:
    static void render(ICurve& curve, double step, ostream& file);
};

#endif