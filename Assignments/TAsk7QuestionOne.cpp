#include <iostream>
using namespace std;
class Rectangle {
private:
    float length = 0.0;
    float width = 0.0;

public:
    void setDimensions(float len, float wid) {
        length = len;
        width = wid;
    }

    float calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
