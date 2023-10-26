//
// Created by Kevin Ye on 10/26/2023.
// Copyright (c) KevinYe on 10/26/2023.

#include <stdio.h>
#include <math.h>


double f(double x) {
    return exp(3 * x) + pow(x, 7);
}


double trapezoidal_integral(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }

    return h * sum;
}

int main() {
    double a = 1.0;
    double b = 3.0;
    int n = 10000;

    double integral = trapezoidal_integral(a, b, n);

    printf("%.3lf\n", integral);

    return 0;
}
