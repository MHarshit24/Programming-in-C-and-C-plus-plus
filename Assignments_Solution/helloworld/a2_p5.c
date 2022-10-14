/*
CH-230-A
a2_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    int a;
    printf("\nEnter a value: ");
    scanf("%d", &a);
    printf("\nYour entered value was: %d", a);
    int *ptr_a;
    ptr_a = &a;
    printf("\nAddress of a: %p", ptr_a);
    *ptr_a = *ptr_a + 5;
    printf("\nModified value of a: %d", *ptr_a);
    printf("\nAddress of modified value of a: %p", ptr_a);
    return 0;
}