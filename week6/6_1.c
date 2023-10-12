//
// Created by Kevin Ye on 10/12/2023.
// Copyright (c) KevinYe on 10/12/2023.

#include <stdio.h>

void T(void);

void S(void);

int main(void) {
    char first_ch;
    printf("Please input first character:");
    scanf("%c", &first_ch);
    getchar();
    if (first_ch >= 'a' && first_ch <= 'z') first_ch += 'A' - 'a';
    switch (first_ch) {
        case 'M':printf("Monday\n");
            break;
        case 'W':printf("Wednesday\n");
            break;
        case 'F':printf("Friday\n");
            break;
        case 'T':T();
            break;
        case 'S':S();
            break;
        default:printf("Illegel input!\n");
            break;
    }
    return 0;
}

void T(void) {
    char second_char;
    printf("Please input second character:");
    scanf("%c", &second_char);
    switch (second_char) {
        case 'u':printf("Tuesday\n");
            break;
        case 'h':printf("Thursday\n");
            break;
        default:printf("Illegal input!\n");
            break;
    }
}

void S(void) {
    char second_char;
    printf("Please input second character:");
    scanf("%c", &second_char);
    switch (second_char) {
        case 'a':printf("Saturday\n");
            break;
        case 'u':printf("Sunday\n");
            break;
        default:printf("Illegal input!\n");
            break;
    }
}
