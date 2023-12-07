//
// Created by Kevin Ye on 12/7/2023.
// Copyright (c) KevinYe on 12/7/2023.

#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int FindNoVowel(char str[][20], int num, char res[][20]) {
    int count = 0;

    for (int i = 0; i < num; i++) {
        int hasVowel = 0;
        int len = strlen(str[i]);

        for (int j = 0; j < len; j++) {
            if (isVowel(str[i][j])) {
                hasVowel = 1;
                break;
            }
        }
        if (!hasVowel) strcpy(res[count++], str[i]);
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(res[i], res[j]) > 0) {
                char temp[20];
                strcpy(temp, res[i]);
                strcpy(res[i], res[j]);
                strcpy(res[j], temp);
            }
        }
    }
    return count;
}

int main(void) {
    char words[10][20];
    for (int i = 0; i < 10; i++) scanf("%s", words[i]);
    char res[10][20];
    int count = FindNoVowel(words, 10, res);
    for (int i = 0; i < count; i++) printf("%s ", res[i]);
    return 0;
}