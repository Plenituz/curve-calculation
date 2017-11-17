#ifndef VECTOR_M
#define VECTOR_M


class Vector
{

public:
    double x;
    double y;
    double z;

    Vector();
    Vector(double x, double y, double z);
    ~Vector();

    double magnitude();
    void normalize();

    Vector operator*(const Vector& v);
    Vector operator/(const double& d);
    bool operator==(const Vector& v);
    //Vector operator+(const Point& v);
};

#endif
