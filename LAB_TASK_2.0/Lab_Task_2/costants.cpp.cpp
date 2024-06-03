#include <iostream>
using namespace std;

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    
    int area;
    area = LENGTH * WIDTH;
    
    cout << area; // prints the area
    cout << NEWLINE; // prints a newline character
    return 0;
}
