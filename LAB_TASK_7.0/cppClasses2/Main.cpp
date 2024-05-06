#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    
    // Creating first instance using default constructor
    Rectangle rect1;

    std::cout << "Enter length of the first rectangle: ";
    std::cin >> length;
    rect1.setLength(length);

    std::cout << "Enter width of the first rectangle: ";
    std::cin >> width;
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    // Creating second instance using overloaded constructor
    std::cout << "\nEnter length of the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the second rectangle: ";
    std::cin >> width;

    Rectangle rect2(length, width);

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
