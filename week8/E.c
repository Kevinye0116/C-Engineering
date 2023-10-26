//
// Created by Kevin Ye on 10/26/2023.
// Copyright (c) KevinYe on 10/26/2023.

#include <stdio.h>

int main(void) {
    int num[22] = {[0]=2, [1]=3};
    for (int i = 2; i < 20; i++) {
        if ((i + 1) % 2 != 0) num[i] = num[i - 2] + num[i - 1];
        else num[i] = num[i - 2] - num[i - 1];
    }
    for (int i = 0; i < 20; i++) printf("%d ", num[i]);
    return 0;
}
