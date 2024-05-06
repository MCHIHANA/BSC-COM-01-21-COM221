#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    Rectangle rect;

    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    rect.setWidth(width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
