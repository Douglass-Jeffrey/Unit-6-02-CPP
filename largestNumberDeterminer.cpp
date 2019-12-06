// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

// Created by: Douglass Jeffrey
// Created on: Dec 2019
// This program gets random numbers then finds the average using an array

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> arrayOfNumbers) {
    // This function finds the largest number of the randomly generated list

    // Variables and arrays
    int largestArrayNumber = 0;

    // Process
    for (int repeater = 0; repeater < 10; repeater++) {
        if (arrayOfNumbers[repeater] > largestArrayNumber) {
            largestArrayNumber = arrayOfNumbers[repeater];
        }
    }

    // Output
    return largestArrayNumber;
}

int main() {
    // This function creates an array of 10 numbers then prints out the largest

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int largestNumber;
    std::array<int, 10> numberArray;

    // Adding numbers to an array
    for (int repeater = 0; repeater < 10; repeater++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << "Random Number " << repeater << " is " << randomNumber
                  << std::endl;
        numberArray[repeater] = randomNumber;
    }

    // Process
    largestNumber = Calculate(numberArray);

    // Output
    std::cout << "The largest randomly generated number from the array is " \
              << largestNumber << std::endl;
}
