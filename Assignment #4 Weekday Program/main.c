// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Jakub Malhotra
// Created on: April 2024
// This program uses do while loop to calculate factorial

#include <stdio.h>
#include <cs50.h>

int main() {
    // input
    int userInput = get_int(
        "Enter a number 1-7 to see the corresponding day of the week: ");

    // process and output
    if (userInput <= 0 || userInput > 7) {
        printf("Please enter a valid day of the week\n");
    } else {
        switch
            (userInput) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid.\n");
            }
    }

    printf("\nDone.\n");
    return 0;
}
