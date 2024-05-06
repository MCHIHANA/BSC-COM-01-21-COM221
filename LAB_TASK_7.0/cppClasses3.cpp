#include <iostream>
#include <cmath>

namespace shapes {
    class Square {
    private:
        float sideLength;
    public:
        Square() : sideLength(0) {} // Default constructor
        Square(float side) : sideLength(side) {} // Overloaded constructor
        ~Square() {} // Destructor

        // Accessor methods
        void setSideLength(float side) {
            sideLength = side;
        }

        float getSideLength() const {
            return sideLength;
        }
    };

    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle() : base(0), height(0) {} // Default constructor
        Triangle(float b, float h) : base(b), height(h) {} // Overloaded constructor
        ~Triangle() {} // Destructor

        // Accessor methods
        void setBase(float b) {
            base = b;
        }

        void setHeight(float h) {
            height = h;
        }

        float getBase() const {
            return base;
        }

        float getHeight() const {
            return height;
        }
    };

    class Circle {
    private:
        float radius;
    public:
        Circle() : radius(0) {} // Default constructor
        Circle(float r) : radius(r) {} // Overloaded constructor
        ~Circle() {} // Destructor

        // Accessor methods
        void setRadius(float r) {
            radius = r;
        }

        float getRadius() const {
            return radius;
        }
    };

    class Area {
    public:
        // Static member functions to calculate area
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
    shapes::Square square(5);
    shapes::Triangle triangle(4, 3);
    shapes::Circle circle(2);

    std::cout << "Area of square: " << shapes::Area::calculateArea(square) << std::endl;
    std::cout << "Area of triangle: " << shapes::Area::calculateArea(triangle) << std::endl;
    std::cout << "Area of circle: " << shapes::Area::calculateArea(circle) << std::endl;

    return 0;
}
