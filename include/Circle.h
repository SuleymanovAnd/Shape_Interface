#include "Shape.h"
#include <iostream>

class Circle : public Shape {
    int radius;

    virtual std::string type(){
        return "Circle";
    }

    virtual double square(){
        return 3.14159 * (radius * radius);
    }


};