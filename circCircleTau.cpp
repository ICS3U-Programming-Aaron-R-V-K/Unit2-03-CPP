// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: Feb 28, 2025
// The code takes the input of the person
// This program ask for the radius
// Then displays the circumference
#include <iostream>

int main() {
    // declare the constants
    const float TAU = 6.28;

    // declare the variables
    float radius, circumference;

    // get radius from the user
    std::cout << "Enter radius(m): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference using tau
    std::cout << "/n";
    std::cout << "Circumference = " << circumference << "m"
              << std::endl;
}
