/**
 * @file NumberAnalyzer.cpp
 * @brief Professional C++ program to analyze integer properties (Sign and Parity).
 * @version 1.1
 */

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

// Strongly typed representation of Number Properties
enum class Sign { Positive, Negative, Zero };
enum class Parity { Even, Odd };

struct NumberAttributes {
    Sign numberSign;
    Parity numberParity;
};

/**
 * @brief Analyzes an integer to determine its sign and parity.
 * @param number The integer to evaluate.
 * @return NumberAttributes structure containing Sign and Parity enums.
 */
NumberAttributes analyzeNumber(int number) {
    NumberAttributes attributes;

    // 1. Determine Sign
    if (number > 0) {
        attributes.numberSign =Sign::Positive;
    } else if (number < 0) {
        attributes.numberSign = Sign::Negative;
    } else {
        attributes.numberSign = Sign::Zero;
    }

    // 2. Determine Parity 
    // Note: In C++, the % operator can yield negative results for negative inputs (-5 % 2 = -1).
    // Checking (number % 2 == 0) ensures safety for all signed numbers.
    if (number % 2 == 0) {
        attributes.numberParity = Parity::Even;
    } else {
        attributes.numberParity = Parity::Odd;
    }

    return attributes;
}

/**
 * @brief Safe user input function that enforces proper integer extraction.
 * @return Validated integer input.
 */
int getValidatedInteger() {
    std::string input;
    int validatedNumber;

    while (true) {
        std::cout << "Enter an integer to analyze: ";
        if (!std::getline(std::cin, input)) {
            std::cerr << "\n[Error] Input stream corrupted. Exiting.\n";
            std::exit(EXIT_FAILURE);
        }

        std::stringstream ss(input);
        // Ensure an integer can be read and no trailing garbage characters exist
        if (ss >> validatedNumber && (ss >> std::ws).eof()) {
            return validatedNumber;
        }

        std::cout << "Invalid input. Please enter a valid whole number (e.g., -42, 0, 7).\n\n";
    }
}

int main() {
    // Print Application Header
    std::cout << "===========================================\n";
    std::cout << "   Professional Number Properties Checker  \n";
    std::cout << "===========================================\n\n";

    // Get input and analyze
    int inputNumber = getValidatedInteger();
    NumberAttributes results = analyzeNumber(inputNumber);

    // Format and present results
    std::cout << "\n---------------- Result -------------------\n";
    std::cout << "Number Analyzed: " << inputNumber << "\n\n";

    // Output sign result
    std::cout << " * Classification: ";
    switch (results.numberSign) {
        case Sign::Positive: std::cout << "POSITIVE\n"; break;
        case Sign::Negative: std::cout << "NEGATIVE\n"; break;
        case Sign::Zero:     std::cout << "ZERO (Neutral Sign)\n"; break;
    }

    // Output parity result
    std::cout << " * Parity:         ";
    switch (results.numberParity) {
        case Sign::Zero: // Optional design alignment, zero is mathematically even
        case Parity::Even: std::cout << "EVEN\n"; break;
        case Parity::Odd:  std::cout << "ODD\n"; break;
    }
    std::cout << "-------------------------------------------\n";

    return EXIT_SUCCESS;
}
