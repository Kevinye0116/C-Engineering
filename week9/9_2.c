//
// Created by Kevin Ye on 11/2/2023.
// Copyright (c) KevinYe on 11/2/2023.

#include <math.h>
#include <stdio.h>

double f(double x) {
    return 2 * x + 1;
}

double integral(double a, double b, long n, double (*p)(double));

int main(void) {
    double x1, x2, x3;
    double a, b;
    long n;
    scanf("a=%lf,b=%lf,n=%ld", &a, &b, &n);
    x1 = integral(a, b, n, cos);
    x2 = integral(a, b, n, sin);
    x3 = integral(a, b, n, f);
    printf("integral cos:%lf\n"
           "integral sin:%lf\n"
           "integral 2x+1:%lf\n", x1, x2, x3);
    return 0;
}

double integral(double a, double b, long n, double (*p)(double)) {
    double h = (b - a) / n;
    double sum = 0.5 * (p(a) + p(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += p(x);
    }

    return h * sum;
}