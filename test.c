//
// Created by Kevin Ye on 10/10/2023.
// Copyright (c) KevinYe on 10/10/2023.

#include <stdio.h>

int main(void) {
    int x, y, t;
    scanf("%d%d", &x, &y);
    if (x > y)
        t = x, x = y, y = t;
    printf("x: %d y: %d\n", x, y);
    return 0;
}
