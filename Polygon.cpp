#include "Polygon.h"

Polygon::Polygon(const double * arr)
{
    //Todo
    //decide int size, AKA nrOfElements;
    //remember size/2
    coord = new Vector2[size/2];

    //for-loop to fill coord with every element from arr[]
}

Polygon::~Polygon()
{
    delete [] coord;
}

//Inherited functions
std::string Polygon::getType() const
{
    return "Polygon";
}

double Polygon::area() const
{
    double areaValue = 0;
    
    if(this->isConvex() == true)
    {
        //area = 1/2 * abs ( (X1 * Y2 - X2 * Y1) + (X2 * Y3 - X3 * Y2) + ... + (Xn * Y1 - X1 * Yn) )
        //Size = nrOfElements. Coordinates are in pairs -> half of size
        int maxValue = size/2;
        for(int i = 0; i < maxValue -1; i++)
        {
            //(Xi * X(i+1) - X(i+1) * Yi)
            areaValue += (coord[i].x * coord[i+1].y) - (coord[i+1].x * coord[i].y);
        }
        //Last and first coordinate
        areaValue += (coord[maxValue].x * coord[0].y) - (coord[0].x * coord[maxValue].y);
        
        //abs and divide by .5
        areaValue = abs(areaValue) * (1/2);
    }
    else
    {
        areaValue = -1;
    }

    return areaValue;
}

double Polygon::circumference() const
{
    //Todo
    double tmp;
    return tmp;
}

double* Polygon::position() const
{
    //Todo
    double tmp[2];
    return tmp;
}

double Polygon::distance(Shape s) const
{
    //Todo
    double tmp;
    return tmp;
}

bool Polygon::isConvex() const
{
    //Todo
    //False if one or more interior angle(s) are greater than 180 degrees.
    //True if all interior angles are less than 180 degrees.
    return false;
}