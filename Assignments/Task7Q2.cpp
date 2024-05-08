#include <iostream>
using namespace std;
class Rectangle {
private:
    float length = 0.0;
    float width = 0.0;

public:
    Rectangle() {} // Default constructor
    Rectangle(float len, float wid) : length(len), width(wid) {} // Overloaded constructor

    void setDimensions(float len, float wid) {
        length = len;
        width = wid;
    }

    float calculateArea() const {
        return length * width;
    }
};

int main() {
    // First rectangle instance using default constructor and setter methods
    Rectangle rect1;

    float length1, width1;
    cout << "Enter length of the first rectangle: ";
    cin >> length1;

    cout << "Enter width of the first rectangle: ";
    cin >> width1;

    rect1.setDimensions(length1, width1);

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // Second rectangle instance using overloaded constructor
    float length2, width2;
    cout << "Enter length of the second rectangle: ";
    cin >> length2;

    cout << "Enter width of the second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
