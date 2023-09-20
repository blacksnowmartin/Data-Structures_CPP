//Here's a C++ program that creates a three-by-three matrix, allows the user to enter values into its elements, outputs the elements of the matrix, and calculates the sum of all elements:

#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols];

    // Input values into the matrix
    cout << "Enter values for the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    // Output the elements of the matrix
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and output the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
