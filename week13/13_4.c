//
// Created by Kevin Ye on 11/30/2023.
// Copyright (c) KevinYe on 11/30/2023.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void findLongestWord(char *str);

int main() {
    char input[MAX_LENGTH];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    findLongestWord(input);

    return 0;
}

void findLongestWord(char *str) {
    int maxLength = 0, currentLength = 0;
    char longestWord[MAX_LENGTH], currentWord[MAX_LENGTH];

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            currentWord[currentLength++] = str[i];
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strncpy(longestWord, currentWord, currentLength);
            }
            currentLength = 0;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        strncpy(longestWord, currentWord, currentLength);
    }
    longestWord[maxLength] = '\0';

    printf("%s\n", longestWord);
}
