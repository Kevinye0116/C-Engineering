//
// Created by Kevin Ye on 11/2/2023.
// Copyright (c) KevinYe on 11/2/2023.

#include <stdio.h>

int main() {
    int x;
    int i = 0;
    int j = 1;
    while (i < 5) {
        x = 4 * j;
        for (i = 0; i < 5; i++) {
            if (x % 4 != 0) break;

            x = (x / 4) * 5 + 1;
        }
        j++;
    }
    printf("%d\n", x);
    return 0;
}