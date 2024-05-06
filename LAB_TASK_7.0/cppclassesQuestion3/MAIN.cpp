#include <iostream>
#include <cmath>

namespace shapes {
    class Square {
    private:
        float sideLength;
    public:
        Square() : sideLength(0) {}
        Square(float side) : sideLength(side) {}
        ~Square() {}

        void setSideLength(float side) { sideLength = side; }
        float getSideLength() const { return sideLength; }
    };

    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle() : base(0), height(0) {}
        Triangle(float b, float h) : base(b), height(h) {}
        ~Triangle() {}

        void setBase(float b) { base = b; }
        void setHeight(float h) { height = h; }
        float getBase() const { return base; }
        float getHeight() const { return height; }
    };

    class Circle {
    private:
        float radius;
    public:
        Circle() : radius(0) {}
        Circle(float r) : radius(r) {}
        ~Circle() {}

        void setRadius(float r) { radius = r; }
        float getRadius() const { return radius; }
    };

    class Area {
    public:
        static float calculateArea(const Square& square) {
            return square.getSideLength() * square.getSideLength();
        }

        static float calculateArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        static float calculateArea(const Circle& circle) {
            return M_PI * circle.getRadius() * circle.getRadius();
        }
    };
}

int main() {
    using namespace shapes;
    float side, base, height, radius;

    // Square
    std::cout << "Enter side length of the square: ";
    std::cin >> side;
    Square square(side);

    // Triangle
    std::cout << "Enter base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter height of the triangle: ";
    std::cin >> height;
    Triangle triangle(base, height);

    // Circle
    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
    Circle circle(radius);

    // Calculate areas
    std::cout << "Area of the square: " << Area::calculateArea(square) << std::endl;
    std::cout << "Area of the triangle: " << Area::calculateArea(triangle) << std::endl;
    std::cout << "Area of the circle: " << Area::calculateArea(circle) << std::endl;

    return 0;
}
