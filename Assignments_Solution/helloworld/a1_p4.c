/*
CH-230-A
a1_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    int x = 17, y = 4;
    float a = x, b = y;
    int sum = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    float division = a / b;
    int remainder = x % y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", multiplication);
    printf("difference=%d\n", subtraction);
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", remainder);
    return 0;
}