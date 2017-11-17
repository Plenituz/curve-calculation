#ifndef CURVERENDER
#define CURVERENDER

#include "ICurve.h"
#include <fstream>
#include <vector>
#include "Point.h"

class CurveRenderer{
public:
    //this is public for simplicity sake
    vector<ICurve*> curves;

    void renderAll(double step, ostream& file);
    static void render(ICurve& curve, double step, ostream& file);
    static void renderPoint(Point p, ostream& file);
};

#endif
