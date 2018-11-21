#include "Line.h"

Line::Line(const double * arr)
{
    //Line, 2 sets of (X,Y)
    coord = new double[2];

    coord[0] = arr[0];
    coord[1] = arr[1];
    std::cout << "coordinate is: " << coord[0] << ", " << coord[1] << std::endl;
}
Line::~Line()
{
    delete [] coord;
}
std::string Line::getType() const
{
    return "Line";
}
double Line::area() const
{
    return -1;
}
double Line::circumference() const
{
    double tmp;
    return tmp;
}
double* Line::position() const
{
    double *tmp;
    return tmp;
}
double Line::distance(Shape s) const
{
    double tmp;
    return tmp;
}
bool Line::isConvex() const
{
    return false;
}