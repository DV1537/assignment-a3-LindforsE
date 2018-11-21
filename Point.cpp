#include "Point.h"
#include "Shape.h"

Point::Point(const double * arr)
{
    //Point, 1 set of (X,Y)
    std::cout << "Pointer constructor";
}

std::string Point::getType() const
{
    return "Point";
}

double Point::area() const
{
    double tmp;
    return tmp;
}
double Point::circumference() const
{
    double tmp;
    return tmp;
}
double* Point::position() const
{
    double *tmp;
    return tmp;
}
double Point::distance(Shape s) const
{
    double tmp;
    return tmp;
}
bool Point::isConvex() const
{
    return false;
}