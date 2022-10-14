/*
CH-230-A
a2_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    float a, b, h, square, rectangle, triangle, trapezoid;
    scanf("%f", &a);
    scanf("%f", &b);   
    scanf("%f", &h);
    square = a * a;
    rectangle = a * b;
    triangle = 0.5 * a * h;
    trapezoid = 0.5 * (a + b) * h;
    printf("square area=%f\n", square);
    printf("rectangle area=%f\n", rectangle);
    printf("triangle area=%f\n", triangle);
    printf("trapezoid area=%f\n", trapezoid);
    return 0;
}