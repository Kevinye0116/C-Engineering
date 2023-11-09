//
// Created by Kevin Ye on 11/9/2023.
// Copyright (c) KevinYe on 11/9/2023.

#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    int result[10] = {0};
    int index = 0;
    for (int i = 0; i < 10; i++) {
        int flag = 1;
        for (int j = 0; j <= index; j++) {
            if (arr[i] == result[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) result[index++] = arr[i];
    }
    for (int i = 0; i < index; i++) printf("%d ", result[i]);
    return 0;
}
