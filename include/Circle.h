#include "Shape.h"
#include <iostream>

class Circle : public Shape {
    double radius;
public:
    Circle (): radius(0){};
    Circle (double inRadius): radius(inRadius){};
    virtual std::string type(){
        return "Circle";
    }

    virtual double square(){
        return 3.14159 * (radius * radius);
    }
    virtual BoundingBoxDimensions dimensions(){
        BoundingBoxDimensions Dimensions;
        Dimensions.height = radius*2;
        Dimensions.width = radius*2;
        return Dimensions;
    }
    ~Circle () = default;

};