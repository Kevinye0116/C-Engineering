#include<stdio.h>

int main() {
    double x, y;
    scanf("Type in the number of x:%lf", &x);
    y = x * x + 2 * x - 10;
    printf("%lf", y);
    return 0;
}