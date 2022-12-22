// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: December 16, 2022
// This program generates 10 random numbers from
// 0 - 100 then displays the largest one
// using arrays
#include <random>
#include <array>
#include <iostream>

// global constant
const int MAX_ARRAY_SIZE = 10;


// Find the max value in the array
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> intArray) {
    // Initialize max value to the first element in the array
    int max_value = intArray[0];

    // Loop through the rest of the elements in the array
    for (int i = 1; i < MAX_ARRAY_SIZE; i++) {
        // If the current element is greater than the max
        // value, update the max value
        if (intArray[i] > max_value) {
            max_value = intArray[i];
        }
    }

    return max_value;
}

int main() {
    // constants
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // variables
    int randomNumber, maxNumber;

    // Declared Array with size of 10
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // User interface
    std::cout << "This program generates 10 random numbers "
    << "from 0 - 100 then displays the largest one using arrays";

    // Generates 10 random numbers and adds them to an array
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number (from 0-100)
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        // Holds the random number (in variable)
        randomNumber = idist(rgen);

        // Adds the random number to the array
        arrayOfInt[counter] = randomNumber;

        // Displays what number and where it was added to in the array
        std::cout << arrayOfInt[counter]
                    << " added to array at position " << counter << std::endl;
    }

    // Calls function to find the max number in the array
    maxNumber = FindMaxValue(arrayOfInt);

    // Displays the highest number in the array to the console
    std::cout << "\nThe max value is: " << maxNumber << std::endl;
}
