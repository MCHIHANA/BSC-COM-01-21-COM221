#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle() : length(0), width(0) {}
    ~Rectangle() {}
    void setLength(float len) {
        length = len;
    }
    void setWidth(float wid) {
        width = wid;
    }
    float getLength() const {
        return length;
    }
    float getWidth() const {
        return width;
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
    rect.setLength(length);

    cout << "Enter width of the rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
