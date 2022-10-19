#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
    Triangle t(3,4,5);
    Rectangle r(5.3,3.4);
    Circle c (7.4);

    t.printParams(&t);
    r.printParams (&r);
    c.printParams (&c);
}
