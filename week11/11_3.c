//
// Created by Kevin Ye on 11/16/2023.
// Copyright (c) 2023 Kevin Ye. All rights reserved.

#include <stdio.h>

void line_sort(int a[][4], int b[], int n) {
    for (int i = 0; i < n; ++i) {
        b[i] = 0;
        for (int j = 0; j < 4; ++j) {
            b[i] += a[i][j];
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;

                for (int k = 0; k < 4; ++k) {
                    temp = a[j][k];
                    a[j][k] = a[j + 1][k];
                    a[j + 1][k] = temp;
                }
            }
        }
    }
}

int main() {
    int array[5][4] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) scanf("%d", &array[i][j]);
    }

    int row_sums[5];

    line_sort(array, row_sums, 5);
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("sum\n");
    for (int i = 0; i < 5; i++) printf("%d ", row_sums[i]);

    return 0;
}
