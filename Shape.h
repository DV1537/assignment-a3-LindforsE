#ifndef SHAPE_H
#define SHAPE_H

#include <cmath>
#include <iostream>
#include <fstream>
#include <string>

class Shape
{

protected:

    struct Vector2
    {
        double x;
        double y;
    };
    int size;
    //Vector2 * coord = new Vector2[size];

public:
    
    Shape();
    Shape(double * arr);
    ~Shape();
    virtual std::string getType() const;
    virtual double area() const;
    virtual double circumference() const;
    virtual Vector2 position() const;
    virtual double distance(Shape s) const;

    virtual bool isConvex() const;

};

#endif //SHAPE_H