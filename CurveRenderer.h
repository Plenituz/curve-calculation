#ifndef CURVERENDER
#define CURVERENDER

#include "ICurve.h"
#include <fstream>
#include <vector>

class CurveRenderer{
public:
    //this is public for simplicity sake
    vector<ICurve*> curves;

    void renderAll(double step, ostream& file);
    static void render(ICurve& curve, double step, ostream& file);
};

#endif
