//
// Created by Kevin Ye on 11/16/2023.
// Copyright (c) 2023 Kevin Ye. All rights reserved.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int arr[4][4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) scanf("%d", &arr[i][j]);
    }
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            if (isPrime(arr[i][j])) {
                count++;
                arr[i][j]++;
                while (!isPrime(arr[i][j])) arr[i][j]++;
            } else arr[i][j] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("count=%d\n", count);
    return 0;
}