//
// Created by Kevin Ye on 11/16/2023.
// Copyright © 2023 Kevin Ye. All rights reserved.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 5

int arr[SIZE][SIZE] = {0};

// The following is a helper method to find the intersection between two arrays.
// "bool" can be replaced by "int".
bool findIntersection(int j, int key) {
    for (int k = 0; k < SIZE; k++) {
        if (arr[j][k] == key) return true;
    }
    return false;
}

// This part belongs to the function "qsort", just ignore it and replace the "qsort statement"
// with Insertion-Sort or Selection-Sort, Bubble-Sort can be accepted in such data range.
int cmpfunc(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main(void) {
    // Read in the array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) scanf("%d", &arr[i][j]);
    }
    // Create an array to store the result
    int result[SIZE] = {0};
    int index = 0;
    // Iterate through the array
    for (int i = 0; i < SIZE; i++) {
        int flag = 1;
        for (int j = 1; j < SIZE; j++) {
            // Check if the current element is present in the array
            if (!findIntersection(j, arr[0][i])) flag = 0;
        }
        // If the element is not present, add it to the result array
        if (flag) {
            result[index] = arr[0][i];
            index++;
        }
    }
    // Create a new array to store the sorted result
    int answer[index];
    for (int i = 0; i < index; i++) answer[i] = result[i];
    // Sort the result array
    qsort(answer, index, sizeof(int), cmpfunc); // Replace this with other sorting algorithms.
    // Print the sorted result
    for (int i = 0; i < index; i++) {
        printf("%d ", answer[i]);
    }
    return 0;
}