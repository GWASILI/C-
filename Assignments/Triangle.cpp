#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    double Triangle::getBase() const {
        return base;
    }

    void Triangle::setBase(double b) {
        base = b;
    }

    double Triangle::getHeight() const {
        return height;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }

    Triangle::~Triangle() {}
}
