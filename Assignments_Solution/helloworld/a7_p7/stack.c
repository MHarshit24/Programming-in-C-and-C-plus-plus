/*
CH-230-A
a7_p7 (stack.c)
Abhigyan Deep Barnwal
abarnwal@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void push(struct stack *s, int value)
{
    s -> array[s -> count] = value;
    s -> count++;
}

void pop(struct stack *s)
{
    s -> count--;
}

void empty(struct stack *s)
{
    for(; s -> count > 0; s -> count--)
    {
        printf("%i ", s -> array[s -> count - 1]);
    }
    printf("\n");
}