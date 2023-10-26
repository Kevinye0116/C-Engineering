//
// Created by Kevin Ye on 10/26/2023.
// Copyright (c) KevinYe on 10/26/2023.


#include <stdio.h>

int isPalindrome(long n) {
    int reversed = 0;
    int num = n;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return n == reversed;
}

int main(void) {
    for (int i = 1; i <= 300; i++) {
        if (isPalindrome(i) && isPalindrome(i * i)) printf("%d\n", i);
    }
    return 0;
}