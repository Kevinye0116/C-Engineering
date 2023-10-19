//
// Created by Kevin Ye on 10/19/2023.
// Copyright (c) KevinYe on 10/19/2023.

#include <stdio.h>

int isPrime(int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isValid(int n) {
    int bai, shi, ge;
    bai = n / 100;
    shi = n / 10 % 10;
    ge = n % 10;
    if ((ge + shi) % 10 == bai) return 1;
    else return 0;
}

int main(void) {
    for (int num = 100; num < 1000; num++) {
        if (isPrime(num) && isValid(num)) {
            printf("%d\n", num);
        }
    }
    return 0;
}
