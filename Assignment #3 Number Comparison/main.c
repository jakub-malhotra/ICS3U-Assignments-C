// Copyright (c) 2020 Mr. Coxall. All rights reserved.
//
// Created by: Jakub Malhotra
// Created on: April 2024
// This program calculates which number is greater

#include <stdio.h>

int main() {
    int numberOne;
    int numberTwo;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &numberOne);
    printf("Enter the second number: ");
    scanf("%d", &numberTwo);

    // Processing and Output
    if (numberOne > numberTwo) {
        printf("%d > %d", numberOne, numberTwo);
    } else if (numberOne < numberTwo) {
        printf("%d < %d", numberOne, numberTwo);
    } else {
        printf("%d = %d", numberOne, numberTwo);
    }

    printf("\n");
    printf("\nDone.\n");
    return 0;
}
