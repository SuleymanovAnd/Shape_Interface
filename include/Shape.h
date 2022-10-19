#include <iostream>
#pragma once

class Shape {
protected:
struct BoundingBoxDimensions {
    double width;
    double height;
};

    virtual BoundingBoxDimensions dimensions() = 0;
    virtual double square() = 0;
    virtual std::string type() = 0;
public:
    void printParams(Shape *shape){
        std::cout <<"Type: " << shape->type() << std::endl;
        std::cout << "Square: " << shape->square() << std::endl;
        std::cout << "Bounding Box Dimensions:\n";
        std::cout << "width: " << shape->dimensions().width << std::endl;
        std::cout << "height: " << shape->dimensions().height << std::endl << std::endl;

    }
};