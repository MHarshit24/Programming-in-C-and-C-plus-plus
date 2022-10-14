#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//returns nothing, modifies s by reference
void push(struct stack *s, int n){
    if(s->count >= MAX){
        printf("Stack Overflow\n");
        return;
    }
    //count starts at 0,  use as index; post ++ on count
    s->array[s->count++] = n; 
    return;
}

//returns the popped element, modified s
int pop(struct stack *s){
    if(s->count <= 0){
        printf("Stack Underflow\n");
        exit(1);
    }

    //count starts at 0,  use as index; post -- on count
    return s->array[--s->count];
}

//pre -- on count to subtract it and use it as index. 
void empty(struct stack *s){
    printf("Emptying Stack ");
    while(!isEmpty(s))
        printf("%d ",s->array[--s->count]);
    printf("\n");
    return;
}

//returns true (as int) if s->count is not in right range.
int isEmpty(struct stack *s){
    return !((s->count > 0) && (s->count < 12));
}