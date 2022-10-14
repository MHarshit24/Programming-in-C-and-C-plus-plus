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
void push(int x, int *top, int stack_arr[])
{
    if(*top == (MAX-1))
    {
       exit(1);
    }
    else
    {
        *top=*top+1;
        stack_arr[*top] = x;
    }
}
void DecToBin(int number)
{
    int stack[MAX], top=-1, remainder;
    while(number!=0)
    {
        remainder = number%2;
        push(remainder, &top, stack);
        number = number / 2;
    }
        while(top!=-1)
        printf("%d", pop(&top, stack));
        printf("\n");
}
int pop(int *top, int stack_arr[])
{
    int x;
    if(*top == -1)
    {
        exit(1);
    }
     else
    {
        x = stack_arr[*top];
        *top=*top-1;
     }
    return x;
}           