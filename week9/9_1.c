//
// Created by Kevin Ye on 11/2/2023.
// Copyright (c) KevinYe on 11/2/2023.

#include <stdio.h>

long reverseNumber(long n) {
    long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int fun(long n, long *hw) {
    int count = 0;
    while (count <= 10000) {
        if (n == reverseNumber(n)) {
            *hw = n;
            return count;
        }
        n += reverseNumber(n);
        count++;
    }
    return -1;
}

int main(void) {
    long a, b;
    int c;
    scanf("%ld", &a);
    c = fun(a, &b);
    if (c == -1) printf("error\n");
    else printf("%ld,%d\n", b, c);

    return 0;
}
