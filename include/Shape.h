#include <iostream>

class Shape {
protected:
struct BoundingBoxDimensions {
    int width;
    int height;
};


    virtual BoundingBoxDimensions dimensions() = 0;
    virtual double square() = 0;
    virtual std::string type() = 0;
    void printParams(Shape *shape){
        std::cout <<"Type: " << shape->type() << std::endl;
    }
};