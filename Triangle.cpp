#include "Triangle.h"

Triangle::Triangle(const double * arr)
{
    koord = new Vector2[3];
}

Triangle::~Triangle()
{
    delete [] koord;
}

//Inherited functions
std::string Triangle::getType() const
{
    return "Triangle";
}

double Triangle::area() const
{
    double tmp;
    return tmp;
}

double Triangle::circumference() const
{
    double tmp;
    return tmp;
}

double* Triangle::position() const
{
    double *tmp;
    return tmp;
}

double Triangle::distance(Shape s) const
{
    double tmp;
    return tmp;
}

bool Triangle::isConvex() const
{
    return false;
}