#include <math.h>
#include "Point.h"
#include "Vector.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cassert>

std::string Point::toString()
{
    std::stringstream ss;
    ss << x << " " << y;
    return ss.str();
}

Point::Point(Vector v)
{
    x = v.x;
    y = v.y;
    z = v.z;
}

Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
    this->z = 0;
}

Point::~Point(){

}

double Point::distance(Point a, Point b)
{
    double aMinusBx = a.x - b.x;
    double aMinusBy = a.y - b.y;
    double aMinusBz = a.z - b.z;

    return sqrt( aMinusBx*aMinusBx + aMinusBy*aMinusBy + aMinusBz*aMinusBz );
}

Point Point::operator+(const Vector& v)
{
    Point p = *this;
    double addX = p.x + v.x;
    double addY = p.y + v.y;
    double addZ = p.z + v.z;
    Point resultat = Point(addX, addY, addZ);
    return resultat;
}

Point Point::operator+(const Point& v)
{
    Point p = *this;
    double addX = p.x + v.x;
    double addY = p.y + v.y;
    double addZ = p.z + v.z;
    return Point(addX, addY, addZ);
}

Vector Point::operator-(const Point& p2)
{
    Point p1 = *this;

    double minusX = p1.x - p2.x;
    double minusY = p1.y - p2.y;
    double minusZ = p1.z - p2.z;

    Vector resultat = Vector(minusX, minusY, minusZ);

    return resultat;
}

bool Point::operator==(const Point& v)
{
    Point t = *this;
    return t.x == v.x && t.y == v.y && t.z == v.z;
}

Point Point::operator*(const double& v)
{
    Point p1 = *this;
    p1.x *= v;
    p1.y *= v;
    p1.z *= v;
    return p1;
}


