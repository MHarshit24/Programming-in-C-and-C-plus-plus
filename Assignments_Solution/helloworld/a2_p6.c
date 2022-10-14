/*
CH-230-A
a2_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    double x, y;
    printf("\nEnter a value for x: ");
    scanf("%lf", &x);
    printf("\nEnter a value for y: ");
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("\nAddress that ptr_one contains: %p", ptr_one);
    printf("\nAddress that ptr_two contains: %p", ptr_two);
    printf("\nAddress that ptr_three contains: %p", ptr_three);
    return 0;
}