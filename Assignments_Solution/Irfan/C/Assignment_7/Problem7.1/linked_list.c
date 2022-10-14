#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct list* add(struct list *top){
    struct list *new = (struct list*) malloc(sizeof(struct list));
    scanf("%d", &new->a);
    new->next = NULL;

    //checking for empty list argument.
    if(top == NULL) 
        return new;

    //last pointer to count up
    struct list *last = top;
    for(; last->next != NULL; last = last->next);

    last->next = new;
    return top;
}

//returning new head makes the code compact.
struct list* begg(struct list *top){
    struct list *new = (struct list*) malloc(sizeof(struct list));
    scanf("%d", &new->a);
    new->next = top;
    return new;
}

//return new head makes the code compact.
struct list* rem(struct list *top){
    if (top == NULL)
        return NULL;

    struct list *temp = top->next;
    free(top);
    return temp;
}

//prints integers with space after each ele. no newline at end.
//function to print list
void printL(struct list *top){
    if (top == NULL)
        return;

    //pointer top is temp variable, can update it.
    for (;top != NULL; top = top->next)
        printf("%d ", top->a);
    return;    
}

void freeL(struct list *top){
    struct list *temp;
    for(;top != NULL; top = temp){
        temp = top->next;
        free(top);
    }
    return;
}