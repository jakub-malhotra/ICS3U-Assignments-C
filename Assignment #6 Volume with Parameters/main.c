// Copyright (c) 2024 Jakub Malhotra. All rights reserved.
//
// Created by: Jakub Malhotra
// Created on: April 2024
// This program calculates the volume of a rectangular prism
#include <stdio.h>
#include <cs50.h>

float calculateVolume(float length, float width, float height) {
    float volume;

    // process
    volume = length * width * height;

    return volume;
}

int main() {
    // input
    float length = get_float(
        "Enter the length of the rectangular prism (cm): ");
    float width = get_float(
        "Enter the width of the rectangular prism (cm): ");
    float height = get_float(
        "Enter the height of the rectangular prism (cm): ");

    // call function with return and three parameters
    float volume = calculateVolume(length, width, height);

    // output with error check
    if (length <= 0 || height <= 0 || height <= 0) {
        printf("\nSorry only positive numbers can be used.\n");
    } else {
        printf("\nThe volume of the rectangular prism is %.2f cm³.\n", volume);
    }

    printf("\nDone.\n");

    return 0;
}
