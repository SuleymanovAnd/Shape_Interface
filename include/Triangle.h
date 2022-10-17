#include "Shape.h"
#include <iostream>
#include <cmath>

class Triangle : virtual Shape {

    double a;
    double b;
    double c;

    double p = (a+b+c)/2;

    virtual double square() {
        return sqrt(p * (p - a) * (p - b) * (p - c));
    };


};