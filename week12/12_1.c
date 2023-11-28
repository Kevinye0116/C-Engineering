//
// Created by Kevin Ye on 11/23/2023.
// Copyright (c) KevinYe on 11/23/2023.

#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Del_findgcd(int *a, int n, int *f) {
    int new_n = n / 2 + (n % 2);
    for (int i = 0, j = 0; i < n; i += 2, j++) a[j] = a[i];

    *f = a[0];
    for (int i = 1; i < new_n; i++) *f = gcd(*f, a[i]);
    return new_n;
}

int main(void) {
    int num[] = {6, 8, 9, 11, 12, 13, 15, 16, 18, 19};
    int numSize = sizeof(num) / sizeof(num[0]);
    int result_size;
    int max_gcd;

    result_size = Del_findgcd(num, numSize, &max_gcd);

    for (int i = 0; i < result_size; i++) printf("%d ", num[i]);
    printf(", max common divisor is %d.\n", max_gcd);
    return 0;
}
