//
// Created by Kevin Ye on 11/30/2023.
// Copyright (c) KevinYe on 11/30/2023.

#include <stdio.h>
#include <string.h>

int fun(char *a) {
    int count = 0;
    int j = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (!(a[i] >= '0' && a[i] <= '9')) {
            a[j] = a[i];
            j++;
        } else count++;
    }
    return count;
}

int main(void) {
    char str[100000];
    scanf("%s", str);
    int count = fun(str);
    str[strlen(str) - count] = '\0';
    printf("%d:%s", count, str);
    return 0;
}
