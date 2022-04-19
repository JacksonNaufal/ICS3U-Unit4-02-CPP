// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>
#include <string>


int main() {
    // this function is a loop adder
    std::string integerAsNumber;
    int number;
    int total = 0;
    int loopNumber = 0;

    // input
    std::cout << "Enter your number!: ";
    std::cin >> integerAsNumber;
    std::cout << std::endl;

    // process & output
    try {
        number = std::stoi(integerAsNumber);
        if (number >= 0) {
            for (int loopNumber = 0; loopNumber < number + 1; loopNumber++) {
                total = loopNumber * loopNumber;
                std::cout << "The sum of all the positive numbers from 1 to "
                << number << " is " << total << std::endl;
            }
        } else {
            std::cout << "Not a valid number!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
        }
    std::cout << "\nDone." << std::endl;
}
