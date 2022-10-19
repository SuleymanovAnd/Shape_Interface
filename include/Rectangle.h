#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
    double longSide;
    double width;
public:
    Rectangle ():longSide(0),width(0){};
    Rectangle(double inLongSide, double inWidth){
        if (inLongSide < inWidth) {longSide = inWidth;width = inLongSide;}
        else {longSide = inLongSide; width = inWidth;}
    };

    virtual BoundingBoxDimensions dimensions() {
        BoundingBoxDimensions Dimensions;
        Dimensions.height =  width + 0.5; // так как если вписать прямоугольник в прямоугольник
        Dimensions.width = longSide + 0.5;
        return Dimensions;
    };

    virtual double square() {
        return longSide * width;
    };
    virtual std::string type(){
        return "Rectangle";
    }

    ~Rectangle () = default;
};