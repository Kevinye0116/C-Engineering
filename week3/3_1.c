#include<stdio.h>

int main() {
    double num;
    int b;
    scanf("%lf", &num);
    b = num;
    if (num < 0) {
        printf("sign:-\n");
        printf("integral part:%d\n", b * -1);
        printf("decimal fraction part:%lf\n", (num - b) * -1);
    } else {
        printf("sign:+\n");
        printf("integral part:%d\n", b);
        printf("decimal fraction part:%lf\n", num - b);
    }
    return 0;
}