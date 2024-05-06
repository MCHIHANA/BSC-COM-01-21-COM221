#include <iostream>

using namespace std;

// Function to swap the values of two integers using pointers
void SwapNumbers(int* varA, int* varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling the SwapNumbers function to swap the values, passing pointers to the integers
    SwapNumbers(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
