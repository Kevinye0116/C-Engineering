//
// Created by Kevin Ye on 11/2/2023.
// Copyright (c) KevinYe on 11/2/2023.

#include <math.h>
#include <stdio.h>

double f(double x) {
    return (x * x) / 4.0 - sin(x);
}

double root(double a, double b) {
    double epsilon = 1e-6;
    double mid = (a + b) / 2;

    if (fabs(f(mid)) < epsilon) {
        return mid;
    }

    if (f(a) * f(mid) < 0) {
        return root(a, mid);
    } else {
        return root(mid, b);
    }
}

int main(void) {
    if (f(1) * f(2) > 0) printf("error\n");
    else printf("%lf\n", root(1, 2));
    return 0;
}
