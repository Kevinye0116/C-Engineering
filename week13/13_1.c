//
// Created by Kevin Ye on 11/30/2023.
// Copyright (c) KevinYe on 11/30/2023.

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100005];
    scanf("%s", str);
    int times[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        times[str[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++) {
        if (times[i] != 0) printf("%c:%d ", i, times[i]);
    }
    return 0;
}
