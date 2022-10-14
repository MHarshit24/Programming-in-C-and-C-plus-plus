/*
CH-230-A
a7_p7 (teststack.c)
Abhigyan Deep Barnwal
abarnwal@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main()
{

    char a[100], c;
    int temp;
    struct stack stack_of_12;
    stack_of_12.count = 0;
    
    while(1)
    {
        fgets(a, sizeof(a), stdin);
        sscanf(a, "%c", &c);
        if (c == 's')
        {
            if(stack_of_12.count == 12)
            {
                printf("Pushing Stack Overflow\n");
            }
            else
            {
                fgets(a, sizeof(a), stdin);
                sscanf(a, "%i", &temp);
                printf("Pushing %i\n", temp);
                push(&stack_of_12, temp);
            }
        }
        else if (c == 'p')
        {
            if(stack_of_12.count == 0)
            {
                printf("Popping Stack Underflow\n");
            }
            else
            {
                pop(&stack_of_12);
                printf("Popping %i\n", stack_of_12.array[stack_of_12.count]);
            }
        }
        else if (c == 'e')
        {
            printf("Emptying Stack ");
            empty(&stack_of_12);
        }
        else if (c == 'q')
        {
            printf("Quit\n");
            exit(0);
        }
    }
    return 0;
}

