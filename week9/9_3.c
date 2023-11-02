//
// Created by Kevin Ye on 11/2/2023.
// Copyright (c) KevinYe on 11/2/2023.

#include <stdio.h>

void decimalToBaseN(int decimal, int base) {
    if (decimal == 0) return;


    int remainder = decimal % base;
    decimalToBaseN(decimal / base, base);

    if (remainder < 10) printf("%d", remainder);
    else printf("%c", 'A' + (remainder - 10));

}

int main() {
    int decimal, base;
    scanf("%d %d", &decimal, &base);
    decimalToBaseN(decimal, base);
    printf("\n");
    return 0;
}
