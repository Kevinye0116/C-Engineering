//
// Created by Kevin Ye on 10/19/2023.
// Copyright (c) KevinYe on 10/19/2023.

#include <stdio.h>
#include <math.h>

double calculateSinSeries(double x) {
    double result = 0.0;
    double term = x;
    int n = 1;

    while (fabs(term) > 1e-8) {
        result += term;
        term = -term * x * x / (2 * n) / (2 * n + 1);
        n++;
    }
    return result;
}

int main() {
    double x;
    scanf("%lf", &x);
    double sinValue = calculateSinSeries(x);
    printf("%.1f\n", sinValue);
    return 0;
}
