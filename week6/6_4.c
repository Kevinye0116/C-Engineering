//
// Created by Kevin Ye on 10/12/2023.
// Copyright (c) KevinYe on 10/12/2023.

#include <stdio.h>

int main(void) {
    int count = 0;
    for (int i = 100; i < 1000; i++) {
        int num = i;
        if ((num % 37 == 0) && (((num % 100) * 10 + num / 100) % 37 == 0)
                && (((num % 10) * 100 + num / 10) % 37 == 0)) {
            printf("%d ", num);
            count++;

            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    if (count == 0)
        printf("Wrong!\n");
    return 0;
}
