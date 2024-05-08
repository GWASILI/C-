#include <iostream>
#include <cmath>
using namespace std;

namespace shapes {
    class Square {
    private:
        float side_length;

    public:
        Square() : side_length(0.0) {}
        Square(float side) : side_length(side) {}

        ~Square() {}

        float getSideLength() const { return side_length; }

    };

    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle() : base(0.0), height(0.0) {}
        Triangle(float b, float h) : base(b), height(h) {}

        ~Triangle() {}

        float getBase() const { return base; }
        float getHeight() const { return height; }
    };

    class Circle {
    private:
        float radius;

    public:
        Circle() : radius(0.0) {}
        Circle(float r) : radius(r) {}

        ~Circle() {}

        float getRadius() const { return radius; }
    };

    class Area {
    public:
        static float calculateSquareArea(const Square& square) {
            return square.getSideLength() * square.getSideLength();
        }

        static float calculateTriangleArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        static float calculateCircleArea(const Circle& circle) {
            return M_PI * circle.getRadius() * circle.getRadius();
        }
    };
}

int main() {
    float side_length, base, height, radius;

    cout << "Enter side length of the square: ";
    cin >> side_length;

    cout << "Enter base of the triangle: ";
    cin >> base;

    cout << "Enter height of the triangle: ";
    cin >> height;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Square
    shapes::Square square(side_length);

    // Triangle
    shapes::Triangle triangle(base, height);

    // Circle
    shapes::Circle circle(radius);

    // Calculate and output areas
    cout << "Area of the square: " << shapes::Area::calculateSquareArea(square) << endl;
    cout << "Area of the triangle: " << shapes::Area::calculateTriangleArea(triangle) << endl;
    cout << "Area of the circle: " << shapes::Area::calculateCircleArea(circle) << endl;

    return 0;
}
