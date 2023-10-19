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

void primefactors(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            while (n % i == 0) {
                printf("%d", i);
                n /= i;
                if (n > 1) printf("*");
            }
        }
    }
    printf("\n");
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d=", num);
    primefactors(num);
    return 0;
}
