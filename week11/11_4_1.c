//
// Created by Kevin Ye on 11/16/2023.
// Copyright (c) 2023 Kevin Ye. All rights reserved.

#include <stdio.h>

int binarySearch(const int *arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int Union(int (*a)[6], int res[25]) {
    int count = 0;

    for (int i = 0; i < 5; i++) {
        int size = a[i][0];
        for (int j = 1; j <= size; j++) {
            int element = a[i][j];

            int index = binarySearch(res, 0, count - 1, element);

            if (index == -1) {
                int insertIndex = 0;
                while (insertIndex < count && res[insertIndex] < element) {
                    insertIndex++;
                }

                for (int k = count; k > insertIndex; k--) {
                    res[k] = res[k - 1];
                }

                res[insertIndex] = element;
                count++;
            }
        }
    }
    return count;
}

int main() {
    int sec[5][6] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &sec[i][0]);
        for (int j = 1; j <= sec[i][0]; j++)scanf("%d", &sec[i][j]);
    }

    int result[25];
    int resultSize = Union(sec, result);

    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
