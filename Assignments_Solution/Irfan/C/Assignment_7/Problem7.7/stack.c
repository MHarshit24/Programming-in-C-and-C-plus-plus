#include <stdio.h>
#include "stack.h"
   
//returns nothing, modifies s by reference
void push(struct stack *s, int n){
    printf("Pushing ");
    if(s->count >= MAX){
        printf("Stack Overflow\n");
        return;
    }
    //count starts at 0,  use as index; post ++ on count
    printf("%d\n", s->array[s->count++] = n); 
    return;
}

//returns the popped element, modified s
void pop(struct stack *s){
    printf("Popping ");
    if(s->count <= 0){
        printf("Stack Underflow\n");
        return;
    }

    //count starts at 0,  use as index; post -- on count
    s->count--;
    printf("%d\n", s->array[s->count]);
    return;
}

//pre -- on count to subtract it and use it as index. 
void empty(struct stack *s){
    printf("Emptying Stack ");
    while(!isEmpty(s))
        printf("%d ",s->array[--s->count]);
    printf("\n");
    return;
}

//returns true (as int) if s->count is 0
int isEmpty(struct stack *s){
    return !((s->count > 0) && (s->count < 12));
}