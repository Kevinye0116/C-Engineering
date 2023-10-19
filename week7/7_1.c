//
// Created by Kevin Ye on 10/19/2023.
// Copyright (c) KevinYe on 10/19/2023.

#include <stdio.h>

int main(void) {
    int a, b, c, x, t;

    do {
        scanf("%d", &x);
        a = x / 100;
        b = x % 100 / 10;
        c = x % 10;
    } while (x < 100 || x > 999 || a == b && b == c);

    printf("%d", x);
    while (x != 495) {
        a = x % 10;
        x /= 10;
        b = x % 10;
        x /= 10;
        c = x % 10;
        if (a > b) {
            t = a, a = b, b = t;
        }
        if (b > c) {
            t = b, b = c, c = t;
        }

        if (a > b) {
            t = a, a = b, b = t;
        }
        x = c * 100 + b * 10 + a;
        t = a * 100 + b * 10 + c;
        printf("-%d", x = x - t);
    }
    return 0;
}