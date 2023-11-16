//
// Created by Kevin Ye on 11/16/2023.
// Copyright © 2023 Kevin Ye. All rights reserved.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[5][5] = {0};


bool findIntersection(int j, int key) {
    for (int k = 0; k < 5; k++) {
        if (arr[j][k] == key) return true;
    }
    return false;
}

int cmpfunc(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) scanf("%d", &arr[i][j]);
    }
    int result[5] = {0};
    int index = 0;
    for (int i = 0; i < 5; i++) {
        int flag = 1;
        for (int j = 1; j < 5; j++) {
            if (!findIntersection(j, arr[0][i])) flag = 0;
        }
        if (flag) {
            result[index] = arr[0][i];
            index++;
        }
    }
    int answer[index];
    for (int i = 0; i < index; i++) answer[i] = result[i];
    qsort(answer, index, sizeof(int), cmpfunc);
    for (int i = 0; i < index; i++) {
        printf("%d ", answer[i]);
    }
    return 0;
}