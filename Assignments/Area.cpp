#include "Area.h"
#include <cmath>

namespace shapes {
    double Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    double Area::calculateArea(const Triangle& triangle) {
        return (triangle.getBase() * triangle.getHeight()) / 2.0;
    }

    double Area::calculateArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}
