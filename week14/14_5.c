//
// Created by Kevin Ye on 12/7/2023.
// Copyright (c) KevinYe on 12/7/2023.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count(char a[], char w[][10], int n, int b[]) {
    int change = 0;
    int index1 = 0;
    for (int i = 0; isalpha(a[i]) != 0; i++) {
        w[0][index1] = a[i];
        index1++;
        change = i;
    }
    int index2 = 0;
    for (int i = change + 2; isalpha(a[i]) != 0; i++) {
        w[1][index2] = a[i];
        index2++;
    }
    for (int i = 0; i < strlen(a) - index1; i++) {
        int count1 = 0;
        for (int j = 0; j < index1; j++) {
            if (a[i] == ' ') count1 = 0;
            if (w[0][j] == a[i + j]) count1++;
            if (count1 == index1) b[0]++;
        }
    }
    for (int i = index1 + 1; i < strlen(a) - index2; i++) {
        int count2 = 0;
        for (int j = 0; j < index2; j++) {
            if (a[i] == ' ') count2 = 0;
            if (w[1][j] == a[i + j]) count2++;
            if (count2 == index2) b[1]++;
        }
    }
}

int main() {
    char a[100];
    char w[10][10] = {0};
    int b[10] = {0};
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = 0;
    count(a, w, 2, b);
    for (int i = 0; i <= 1; i++)
        printf("%s:%d ", w[i], b[i]);
}
