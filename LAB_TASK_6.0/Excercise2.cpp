#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int *dynamicInteger = new int;

    // Dynamically allocate a string
    string *dynamicString = new string;

    // Prompt user to assign a value to the dynamically allocated integer
    cout << "Enter a value for the dynamically allocated integer: ";
    cin >> *dynamicInteger;

    // Prompt user to assign a value to the dynamically allocated string
    cout << "Enter a value for the dynamically allocated string: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(std::cin, *dynamicString);

    // Output the value of dynamically allocated integer
    cout << "Dynamically allocated integer value: " << *dynamicInteger <<endl;

    // Output the value of dynamically allocated string
    cout << "Dynamically allocated string value: " << *dynamicString <<endl;

    // Free the dynamically allocated memory
    delete dynamicInteger;
    delete dynamicString;

    return 0;
}
