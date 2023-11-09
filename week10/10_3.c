//
// Created by Kevin Ye on 11/9/2023.
// Copyright (c) KevinYe on 11/9/2023.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    int l = 0, r = 9;
    while (l < r) {
        bool flag_l = isPrime(arr[l]), flag_r = isPrime(arr[r]);
        if (flag_l && flag_r) {
            int t = arr[l];
            arr[l] = arr[r];
            arr[r] = t;
            l++;
            r--;
        } else if (flag_l) r--;
        else if (flag_r) l++;
        else {
            l++;
            r--;
        }
    }
    for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}
