#include <iostream>
using namespace std;

int main() {
   unsigned int a = 60;           // 60 = 0011 1100
   unsigned int b = 13;           // 13 = 0000 1101
   int c = 0;

   c = a & b;                      // Bitwise AND
   cout << "Line 1 - Value of c is: " << c << endl;

   c = a | b;                      // Bitwise OR
   cout << "Line 2 - Value of c is: " << c << endl;

   c = a ^ b;                      // Bitwise XOR
   cout << "Line 3 - Value of c is: " << c << endl;

   c = ~a;                         // Bitwise NOT (One's complement)
   cout << "Line 4 - Value of c is: " << c << endl;

   c = a << 2;                     // Bitwise left shift
   cout << "Line 5 - Value of c is: " << c << endl;

   c = a >> 2;                     // Bitwise right shift
   cout << "Line 6 - Value of c is: " << c << endl;

   return 0;
}

