//
// Created by Kevin Ye on 10/12/2023.
// Copyright (c) KevinYe on 10/12/2023.

#include <stdio.h>

int main() {
    double profit, bonus = 0;
    printf("Please enter the profit for the month (unit: 10,000 yuan):");
    scanf("%lf", &profit);

    switch ((int) profit / 10) {
        case 0:bonus = profit * 0.1;
            break;
        case 1:bonus = 10 * 0.1 + (profit - 10) * 0.075;
            break;
        case 2:
        case 3:bonus = 10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05;
            break;
        case 4:
        case 5:bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
            break;
        case 6:
        case 7:
        case 8:
        case 9: bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
            break;
        default:bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;
    }

    printf("The total number of bonuses to be distributed is: %.4lf\nmillion yuan.\n", bonus);
    return 0;
}
