#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle() : length(0), width(0) {} // Default constructor
    Rectangle(float len, float wid) : length(len), width(wid) {} // Overloaded constructor
    ~Rectangle() {} // Destructor

    // Setter methods
    void setLength(float len) {
        length = len;
    }
    void setWidth(float wid) {
        width = wid;
    }

    // Getter methods
    float getLength() const {
        return length;
    }
    float getWidth() const {
        return width;
    }

    // Method to calculate area
    float calculateArea() const {
        return length * width;
    }
};

int main() {
    // First instance of rectangle using default constructor
    Rectangle rect1;

    float length, width;
    cout << "Enter length of the first rectangle: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter width of the first rectangle: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // Second instance of rectangle using overloaded constructor
    cout << "\nEnter length of the second rectangle: ";
    cin >> length;

    cout << "Enter width of the second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
