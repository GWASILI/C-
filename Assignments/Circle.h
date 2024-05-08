#pragma once

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); // Default constructor
        Circle(double r); // Overloaded constructor

        double getRadius() const; // Accessor method
        void setRadius(double r); // Accessor method

        ~Circle(); // Destructor
    };
}
