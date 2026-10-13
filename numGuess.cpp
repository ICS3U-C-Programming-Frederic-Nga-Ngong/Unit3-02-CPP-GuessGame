// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Determines if a number is the correct guess
#include <iostream>
int main() {
    float number;
    const float CORRECT_ANSWER = 4;

    // get the number from the user
    std::cout << "Enter any  number between 0 and 10\n";
    std::cin >> number;

    // Determine if the number is correct
    if (number == CORRECT_ANSWER) {
        std::cout << "The numbr is correct\n";}

    // Determine if the number is wrong
    if (number != CORRECT_ANSWER) {
        std::cout << "The number is not correct\n";}
}
