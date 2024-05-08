#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    // First rectangle instance using default constructor and setter methods
    Rectangle rect1;
    float length1, width1;

    cout << "Enter length of the first rectangle: ";
    cin >> length1;
    rect1.setLength(length1);

    cout << "Enter width of the first rectangle: ";
    cin >> width1;
    rect1.setWidth(width1);

    cout << "Area of the first rectangle: " << rect1.calculateArea() <<endl;

    // Second rectangle instance using overloaded constructor
    float length2, width2;

    cout << "\nEnter length of the second rectangle: ";
    cin >> length2;

    cout << "Enter width of the second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "Area of the second rectangle: " << rect2.calculateArea() <<endl;

    return 0;
}
