//
// Created by Kevin Ye on 10/10/2023.
// Copyright (c) KevinYe on 10/10/2023.

#include <stdio.h>

int mystery(int a, int b) {
    if (b == 1) return a;
    else return a + mystery(a, b - 1);
}

int main(void) {
    int x = 5, y = 5;
    printf("%d\n", mystery(x, y));
    return 0;
}