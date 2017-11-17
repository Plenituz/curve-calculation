#include "CurveRenderer.h"
#include "ICurve.h"
#include "Point.h"
#include <iostream>
#include <string>
#include "PolyLine.h"

using namespace std;

void CurveRenderer::render(ICurve& curve, double step, ostream& file)
{
    Point first = curve.pointAtPercent(0);
    file << first.x << " " << first.y << " moveto" << endl;
    for(double i = step; i < 1; i += step)
    {
        Point p2 = curve.pointAtPercent(i);
        file << p2.x << " " << p2.y << " lineto ";
    }
    file << "stroke" << endl;
}

void CurveRenderer::renderAll(double step, ostream& file)
{
    file << "%!PS" << endl;
    for(uint i = 0; i < curves.size(); i++){
        CurveRenderer::render(*curves[i], step, file);
    }
}

/**
    for debugging
 */
void CurveRenderer::renderPoint(Point p, ostream& file)
{
    PolyLine line = PolyLine();
    
    Vector topLeft = p - Point(-5, -5);
    Vector botRight = p - Point(5, 5);
    
    Vector topRight = p - Point(5, -5);
    Vector botLeft = p - Point(-5, 5);

    
    line.addPoint(Point(topLeft));
    line.addPoint(Point(botRight));
    
    line.addPoint(Point(botLeft));
    line.addPoint(Point(topRight));
    
    CurveRenderer::render(line, 0.01, file);
}