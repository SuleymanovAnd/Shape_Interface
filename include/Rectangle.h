#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
    int longSide;
    int width;

    virtual BoundingBoxDimensions dimensions() {

    };

    virtual double square() {
        return longSide * width;
    };
    virtual std::string type(){
        return "Rectangle";
    }
};