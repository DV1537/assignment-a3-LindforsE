#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point : public Shape
{

private:




public:

    Point(const double * arr);
    virtual std::string getType() const;
    virtual double area() const;
    virtual double circumference() const;
    virtual Vector2 position() const;
    virtual double distance(Shape s) const;

    virtual bool isConvex() const;

};


#endif //POINT_H