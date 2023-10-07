//
// Created by Kevin Ye on 10/7/2023.
// Copyright (c) KevinYe on 10/7/2023.

#include <stdio.h>

int main(void) {
    double a, b, c, d, e;
    printf("Please input five real numbers:");
    scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    if (a <= b && b <= c && c <= d && d <= e)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
