#ifndef LINE_H
#define LINE_H
#include "Shape.h"

class Line : public Shape
{
private:

    int size;
    double * coord;

public:

    Line(const double * arr);
    ~Line();
    virtual std::string getType() const;
    virtual double area() const;
    virtual double circumference() const;
    //virtual Vector2 position() const;
    virtual double* position() const;
    virtual double distance(Shape s) const;

    virtual bool isConvex() const;



};

#endif //LINE_H