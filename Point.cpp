#include "Point.h"
#include "Shape.h"

Point::Point(const double * arr)
{
    //Point, 1 set of (X,Y)
    coord = new Vector2[1];
    std::cout << "Pointer constructor";
}

Point::~Point()
{
    delete [] coord;
}

//Inherited functions
std::string Point::getType() const
{
    return "Point";
}

double Point::area() const
{
    return -1;
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