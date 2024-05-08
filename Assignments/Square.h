#pragma once

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square(); // Default constructor
        Square(double length); // Overloaded constructor

        double getSideLength() const; // Accessor method
        void setSideLength(double length); // Accessor method

        ~Square(); // Destructor
    };
}
