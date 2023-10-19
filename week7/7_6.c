//
// Created by Kevin Ye on 10/19/2023.
// Copyright (c) KevinYe on 10/19/2023.

#include <stdio.h>
#include <math.h>

#define TOLERANCE 1e-6

double f(double x) {
    return cos(x) - x;
}

double f_prime(double x) {
    return -sin(x) - 1;
}

int main() {
    double x0, x1;
    scanf("%lf", &x0);
    while (1) {
        x1 = x0 - f(x0) / f_prime(x0);
        if (fabs(x1 - x0) < TOLERANCE) {
            printf("x=%.6lf\n", x1);
            break;
        }
        x0 = x1;
    }
    printf("f(x)=%.6lf\n", f(x1));

    return 0;
}
