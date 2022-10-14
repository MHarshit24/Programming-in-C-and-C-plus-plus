/*
CH-230-A
a8_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include "stack.h"
int main()
{
    int number;
    scanf("%d",&number);
    printf("The binary representation of %d is ",number);
    DecToBin(number);
    return 0;
}
