//
// Created by Kevin Ye on 10/26/2023.
// Copyright (c) KevinYe on 10/26/2023.

#include <stdio.h>
#include <math.h>

double f(double x) {
    return exp(x) + x;
}

int main() {
    double a = -1.0;
    double b = 1.0;
    double epsilon = 1e-6;

    while ((b - a) > epsilon) {
        double mid = (a + b) / 2;

        if (fabs(f(mid)) < epsilon) {
            printf("x=%.6lf", mid);
            break;
        }

        if (f(mid) * f(a) < 0) {
            b = mid;
        } else {
            a = mid;
        }
    }

    return 0;
}
