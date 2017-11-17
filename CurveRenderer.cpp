#include "CurveRenderer.h"
#include "ICurve.h"
#include "Point.h"
#include <iostream>
#include <string>

using namespace std;

void CurveRenderer::render(ICurve& curve, double step, ostream& file)
{    
    for(double i = step; i < 1; i += step){
        Point p1 = curve.pointAtPercent(i-step);
        Point p2 = curve.pointAtPercent(i);
        file << " " << p1.x << " " << p1.y << " moveto " << p2.x << " " << p2.y << " lineto stroke" << endl;
    }
}