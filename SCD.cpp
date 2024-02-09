#include <iostream>
using namespace std
//L1S21BSSE0091

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    // Check for division by zero
    if (b == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0; // Return 0 in case of division by zero
    }

    return a / b;
}


int main() {
    double num1, num2;
    
    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform operations
    std::cout << "Sum: " << add(num1, num2) << std::endl;
    std::cout << "Difference: " << subtract(num1, num2) << std::endl;
    std::cout << "Product: " << multiply(num1, num2) << std::endl;
    std::cout << "Quotient: " << divide(num1, num2) << std::endl;

    return 0;
}
