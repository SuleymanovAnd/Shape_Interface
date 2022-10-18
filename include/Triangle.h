#include "Shape.h"
#include <iostream>
#include <cmath>

class Triangle : virtual Shape {

    double a;
    double b;
    double c;

    double p = (a+b+c)/2;
public:
    Triangle(){};
    Triangle (double inA, double inB, double inC) : a(inA), b(inB),c(inC){};

    virtual double square() {
        return sqrt(p * (p - a) * (p - b) * (p - c));
    };

    virtual std::string type(){
        return "Triangle";
    }

    virtual BoundingBoxDimensions dimensions(BoundingBoxDimensions Dimensions) {
        Dimensions.height =  (a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))))*2;
        Dimensions.width = Dimensions.height;
        return Dimensions;
    }


};