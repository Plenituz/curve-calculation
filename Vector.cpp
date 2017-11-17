#include "Vector.h"
#include "Point.h"
#include <math.h>
#include <sstream>
#include <string>

Vector::Vector()
{
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(double x, double y)
{
    this->x = x;
    this->y = y;
    this->z = 0;
}

Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector::~Vector()
{
}

double Vector::magnitude()
{
    return sqrt(x*x + y*y + z*z);
}

void Vector::normalize()
{
    double d = magnitude();
    x /= d;
    y /= d;
    z /= d;
}

//Vector Vector::operator+(const Point& v)
//{
//    Vector p = *this;
//    double addX = p.x + v.x;
//    double addY = p.y + v.y;
//    double addZ = p.z + v.z;
//    return Vector(addX, addY, addZ);
//}

Vector Vector::operator*(const Vector& v2)
{
    Vector v1 = *this;

    double x = v1.y*v2.z - v1.z*v2.y;
    double y = v1.z*v2.x - v1.x*v2.z;
    double z = v1.x*v2.y - v1.y*v2.x;

    return Vector(x, y, z);
}

Vector Vector::operator*(const double& d)
{
    Vector v = *this;

    Vector res = Vector(v.x * d, v.y * d, v.z * d);
    return res;
}


Vector Vector::operator/(const double& d)
{
    Vector v = *this;

    Vector res = Vector(v.x / d, v.y / d, v.z / d);
    return res;
}

bool Vector::operator==(const Vector& v2)
{
    //we should probably check the distance between v1 and v2 with a threshold
    //to avoid floating point errors
    Vector v1 = *this;
    return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;
}

Vector Vector::operator+(const Vector& v)
{
    Vector t = *this;
    return Vector(v.x + t.x, v.y + t.y, v.z + t.z);
}

std::string Vector::toString()
{
    std::stringstream ss;
    ss << x << " " << y;
    return ss.str();
}