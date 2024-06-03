#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - Value of c is: " << c << endl;

    c = a - b;
    cout << "Line 2 - Value of c is: " << c << endl;

    c = a * b;
    cout << "Line 3 - Value of c is: " << c << endl;

    c = a / b;
    cout << "Line 4 - Value of c is: " << c << endl;

    // The following line seems to be commented out incorrectly
    // c = a 6 b; 
    // Assuming it should be c = a % b; for modulus operation

    c = a % b;
    cout << "Line 5 - Value of c is: " << c << endl;

    c = a++;
    cout << "Line 6 - Value of c is: " << c << endl;

    c = a--;
    cout << "Line 7 - Value of c is: " << c << endl;

    return 0;
}
