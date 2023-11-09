//
// Created by Kevin Ye on 10/10/2023.
// Copyright (c) KevinYe on 10/10/2023.

#include <stdio.h>

int x = 0;

void f();

int main(void) {
    int x, loop = 0;
    loop:
    for (x = 1; x < 5; x++) {
        int x = 2;
        printf("%d", x);
    }
    printf("%d", x);
    f();
    loop++;
    if (loop < 1) goto loop;
}

void f() {
    printf("%d", x++);
}