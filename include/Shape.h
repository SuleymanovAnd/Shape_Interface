#include <iostream>

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
    }
};