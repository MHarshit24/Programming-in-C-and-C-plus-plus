/*
CH-230-A
a2_p1.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    double a, b;
    double sum, difference, square;
    int c, d;
    int sumint, productint;
    char e, f;
    int sumchar, productchar;

    scanf("%lf", &a);
    getchar();
    scanf("%lf", &b);
    getchar();
    scanf("%d\n", &c);
    getchar();
    scanf("%d\n", &d);
    getchar();
    scanf("%c\n", &e);
    getchar();
    scanf("%c\n", &f);

    sum = a + b;
    difference = a - b;
    square = a * a;
    sumint = c + d;
    productint = c * d;
    sumchar = e + f;
    productchar = e * f;

    printf("sum of double=%lf\n", sum);
    printf("difference of doubles=%lf\n", difference);
    printf("squares=%lf\n", square);
    printf("sum of integers=%d\n", sumint);
    printf("product of integers=%d\n", productint);
    printf("sum of chars=%d\n", sumchar);
    printf("product of chars=%d\n", productchar);
    printf("sum of chars=%c\n", sumchar);
    printf("product of chars=%C\n", productchar);

    return 0;
}