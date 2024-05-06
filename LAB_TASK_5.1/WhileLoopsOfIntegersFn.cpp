#include <iostream>
#include <cstdlib>
#include <string> // Include the <string> header for string operations

using namespace std;

int main() {
    int userInputValue;
    string input;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> input;

        // Check if input is an integer
        try {
            userInputValue = stoi(input);
        } catch (invalid_argument& e) {
            cout << "Sorry, you have entered an invalid number. Please try again." << endl;
            continue;
        }

        if (userInputValue >= 5 && userInputValue <= 10) {
            cout << "Your input value of " << userInputValue << " has been accepted" << endl;
            break;
        } else {
            cout << "You entered " << userInputValue << ". Please enter an integer between 5 and 10." << endl;
        }
    }

    return 0;
}
