//
// Created by Kevin Ye on 10/7/2023.
// Copyright (c) KevinYe on 10/7/2023.

#include <stdio.h>

int main(void) {
    char name_A, name_B;
    double math_A, math_B, physic_A, physic_B, chemistry_A,
            chemistry_B, sum_A, sum_B, average_A, average_B;
    scanf("%c%lf%lf%lf\n%c%lf%lf%lf",
          &name_A,
          &math_A,
          &physic_A,
          &chemistry_A,
          &name_B,
          &math_B,
          &physic_B,
          &chemistry_B);
    sum_A = math_A + physic_A + chemistry_A;
    average_A = sum_A / 3.0;
    sum_B = math_B + physic_B + chemistry_B;
    average_B = sum_B / 3.0;
    printf("****************************************************************\n");
    printf("%8s%8s%8s%10s%8s%8s\n", "NAME", "MATH", "PHYSICS", "CHEMISTRY", "SUM", "AVERAGE");
    printf("%8c%8.1f%8.1f%10.1f%8.1f%8.1f\n",
           name_A,
           math_A,
           physic_A,
           chemistry_A,
           sum_A,
           average_A);
    printf("%8c%8.1f%8.1f%10.1f%8.1f%8.1f\n",
           name_B,
           math_B,
           physic_B,
           chemistry_B,
           sum_B,
           average_B);
    printf("****************************************************************\n");
    return 0;
}
