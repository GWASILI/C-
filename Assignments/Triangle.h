#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle(); // Default constructor
        Triangle(double b, double h); // Overloaded constructor

        double getBase() const; // Accessor method
        void setBase(double b); // Accessor method

        double getHeight() const; // Accessor method
        void setHeight(double h); // Accessor method

        ~Triangle(); // Destructor
    };
}
