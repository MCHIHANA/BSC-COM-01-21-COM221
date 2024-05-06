#include <iostream>

using namespace std;

int main() {
    // Declare variables for dimensions of the array
    int rows, cols;

    // Prompt user for dimensions of the array
    cout << "Enter the number of rows for the 2D array (maximum 3): ";
    cin >> rows;
    // Check if the input is within the allowed range
    if (rows <= 0 || rows > 3) {
        cout << "Invalid input. Number of rows must be between 1 and 3." <<endl;
        return 1; // Exit program with error
    }

    cout << "Enter the number of columns for the 2D array (maximum 3): ";
    cin >> cols;
    // Check if the input is within the allowed range
    if (cols <= 0 || cols > 3) {
        cout << "Invalid input. Number of columns must be between 1 and 3." <<endl;
        return 1; // Exit program with error
    }

    // Dynamically allocate memory for the 2D array
    double **array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    // Assign values to each element of the array using nested loops
    cout << "Enter the values for the 2D array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
