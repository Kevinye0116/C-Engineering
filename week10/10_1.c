//
// Created by Kevin Ye on 11/9/2023.
// Copyright (c) KevinYe on 11/9/2023.

#include <stdio.h>

int count_unique_elements(const int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == arr[j] && i != j) {
                found = 1;
                break;
            }
        }
        if (!found) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    int count = count_unique_elements(arr, 10);
    printf("%d\n", count);
    return 0;
}
