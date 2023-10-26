//
// Created by Kevin Ye on 10/26/2023.
// Copyright (c) KevinYe on 10/26/2023.

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int m, n, t = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d,%d)\n", i, i + 2);
            t++;
        }
    }
    if (t == 0) printf("该区间内无孪生素数\n");
    else printf("t=%d\n", t);
    return 0;
}
