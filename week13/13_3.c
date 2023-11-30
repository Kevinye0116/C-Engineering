//
// Created by Kevin Ye on 11/30/2023.
// Copyright (c) KevinYe on 11/30/2023.

#include <stdio.h>
#include <string.h>

void fun(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            for (int j = strlen(str) - 1; j >= i; j--) str[j + 1] = str[j];
            str[i] = '$';
            i += 2;
        } else i++;
    }
}

int main(void) {
    char str[100000];
    scanf("%s", str);
    fun(str);
    printf("%s", str);
    return 0;
}
