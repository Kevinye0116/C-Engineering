//
// Created by Kevin Ye on 10/12/2023.
// Copyright (c) KevinYe on 10/12/2023.

#include <stdio.h>

int main(void) {
    int num, i = 0;
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        i++;
    }
    printf("%d\n", i);
    return 0;
}
