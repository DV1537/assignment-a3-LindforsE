#ifndef TRANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{

private:

    struct Vector2
    {
        double x, y;
    };
    
    Vector2 * koord;

public:

    Triangle(const double * arr);
    ~Triangle();

    //Inherited functions
    virtual std::string getType() const;
    virtual double area() const;
    virtual double circumference() const;
    //virtual Vector2 position() const;
    virtual double* position() const;
    virtual double distance(Shape s) const;
    virtual bool isConvex() const;

};


#endif //TRIANGLE_H