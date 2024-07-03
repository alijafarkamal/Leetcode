// Module 1: MathOperations module
// This module encapsulates mathematical operations

class MathOperations {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

// Module 2: UserIO module
// This module handles user input and output

#include <iostream>

class UserIO {
public:
    static int getInput() {
        int input;
        std::cout << "Enter a number: ";
        std::cin >> input;
        return input;
    }

    static void displayResult(int result) {
        std::cout << "Result: " << result << std::endl;
    }
};

// Module 3: Main module
// This module integrates the MathOperations and UserIO modules

int main() {
    // Use MathOperations module
    int num1 = UserIO::getInput();
    int num2 = UserIO::getInput();

    int sum = MathOperations::add(num1, num2);
    int product = MathOperations::multiply(num1, num2);

    // Use UserIO module
    UserIO::displayResult(sum);
    UserIO::displayResult(product);

    return 0;
}
