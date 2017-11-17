#ifndef VECTOR_M
#define VECTOR_M

#include <string>

class Vector
{

public:
    double x;
    double y;
    double z;

    Vector();
    Vector(double x, double y);
    Vector(double x, double y, double z);
    ~Vector();

    double magnitude();
    void normalize();
    std::string toString();
    
    Vector operator*(const Vector& v);
    Vector operator/(const double& d);
    Vector operator*(const double& d);
    bool operator==(const Vector& v);
    Vector operator+(const Vector& v);
    //Vector operator+(const Point& v);
};

#endif
