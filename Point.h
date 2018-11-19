#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point : public Shape
{

private:




public:

    Point(double * arr);
    std::string getType() const;
    double area() const;
    double circumference() const;
    //Vector2 position() const;
    double distance(Shape s) const;

    bool isConvex() const;

};


#endif //POINT_H