//
// Created by Kevin Ye on 11/30/2023.
// Copyright (c) KevinYe on 11/30/2023.

#include <stdio.h>
#include <string.h>

int ReplaceStr(char *s, const char *t, const char *g) {
    int tLen = strlen(t);
    int gLen = strlen(g);

    int count = 0;

    char *ptr = s;

    while ((ptr = strstr(ptr, t)) != NULL) {
        count++;
        for (int i = strlen(s); i >= ptr - s; i--) {
            int pos = gLen - tLen;
            s[i + pos] = s[i];
        }
        strncpy(ptr, g, gLen);
        ptr++;
    }
    return count;
}

int main(void) {
    char str[100000], t[1000], g[1000];
    scanf("%s%s%s", str, t, g);
    int count = ReplaceStr(str, t, g);
    printf("%s", str);
    printf("\n");
    printf("count=%d", count);
    return 0;
}
