#include "Line.h"

Line::Line(const double * arr)
{
    //Line, 2 sets of (X,Y)
    coord = new double[2];

    //coordinates in a struct, test
    koord = new Vector2[2];

    coord[0] = arr[0];
    coord[1] = arr[1];
    std::cout << "coordinate is: " << coord[0] << ", " << coord[1] << std::endl;

    koord[0].x = arr[0];
    koord[0].y = arr[1];

    koord[1].x = 20;
    koord[1].y = 30;
    std::cout << "koordinate is: " << koord[0].x << ", " << koord[0].y << std::endl;
    std::cout << "Koordinate extra is: " << koord[1].x << ", " << koord[1].y << std::endl;

}
Line::~Line()
{
    delete [] coord;
    delete [] koord;
}

//Inherited functions
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