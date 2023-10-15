#include <iostream>

int main() {
    // Declare an array of integers
    const int arraySize = 5;
    int numbers[arraySize];

    // Populate the array with values
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += numbers[i];
    }

    // Find the maximum element
    int max = numbers[0];
    for (int i = 1; i < arraySize; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Display the array elements, sum, and maximum
    std::cout << "Array elements: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Maximum: " << max << std::endl;

    return 0;
}
