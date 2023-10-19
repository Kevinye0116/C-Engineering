//
// Created by Kevin Ye on 10/19/2023.
// Copyright (c) KevinYe on 10/19/2023.

#include <math.h>
#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0;
    int num = n;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev == n;
}

int main(void) {
    for (int num = 100000; num < 1000000; num++) {
        int square_root = (int) sqrt(num);
        if (square_root * square_root == num && isPalindrome(num))
            printf("%d ", num);
    }
    return 0;
}
