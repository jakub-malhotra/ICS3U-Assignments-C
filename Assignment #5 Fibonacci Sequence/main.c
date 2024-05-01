// Copyright (c) 2024 St. Mother Teresa HS All rights reserved
//
// Created by: Jakub Malhotra
// Created on: April 2024
// This program uses a while loop to calculate Fibonacci numbers

#include <stdio.h>
#include <cs50.h>

int main() {
    // Input
    int userInput = get_int(
        "Enter how many numbers of the Fibonacci sequence should be printed: ");

    // Process and Output
    if (userInput <= 0) {
        printf("Please enter a positive number\n");
    } else {
        // Set the first two numbers of the sequence
        int previousNumber = 0, currentNumber = 1;
        int counter = 0;

        // Print Fibonacci sequence
        while (counter < userInput) {
            printf("Term %d is %d\n", counter, previousNumber);
            // Set the next number using the Fibonacci formula
            int nextNumber = previousNumber + currentNumber;
            // Update the numbers to make the program loop
            previousNumber = currentNumber;
            currentNumber = nextNumber;
            counter++;
        }
    }

    printf("\nDone.\n");
    return 0;
}
