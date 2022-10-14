#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a6_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

struct list{
    int a;
    struct list *next;
};

// function to add node at end
struct list* add(struct list *top);

//function to add node at beginning, returns new head.
struct list* begg(struct list *top);

//function remove node at beginning, returns new head.
struct list* rem(struct list *top);

//function to insert node at specified position, index from 0
struct list* insert(struct list *top, int n);

//function to reverse order of elements
struct list* reverse(struct list *top);

//function to print list
void printL(struct list *top);

//function to delete rest of list starting from top.
void freeL(struct list *top);

int main(){

    //setup
    struct list *head = NULL;
    int pos = 0;

    char inp;
    int flag = 1; //flag to determine exit of loop.
    while(flag){
        scanf("\n%c", &inp);
        switch(inp){  //required, calls the right function
            case 'a':
                head = add(head);
                break;
            case 'b':
                head = begg(head);
                break;
            case 'r':
                head = rem(head);
                break;
            case 'i':
                scanf("%d", &pos);
                head = insert(head,pos);
                break;
            case 'R':
                head = reverse(head);
                break;
            case 'p':
                printL(head);
                printf("\n");
                break;
            case 'q':
                freeL(head);
                flag = 0;
                break;
            default:
                printf("Please print valid input (a/b/r/p/q)\n");
        }
    }
    return 0;
}

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

//needs return since might insert at pos 0
struct list* insert(struct list *top, int n){
    if(n < 0){
        printf("Invalid position!\n");
        return top;
    }

    //allocation
    struct list *new = (struct list*) malloc(sizeof(struct list));
    scanf("%d", &(new->a));
    new->next = NULL;

    //pushes two position trackers until it is invalid.
    struct list *nextpos = top;
    struct list *prevpos = NULL;
    for(int i = 0; i < n; i++){
        if(nextpos == NULL){
            printf("Invalid position!\n");
            free(new);
            return top;
        }
        prevpos = nextpos;
        nextpos = nextpos->next;
    }

    //for when position is 0
    if (prevpos == NULL){
        new->next = nextpos;
        return new;
    }

    // 0 < position <= number of elements.
    new->next = nextpos;
    prevpos->next = new;

    return top;
}

//returns new top or head element.
// trail-top-forward
struct list* reverse(struct list *top){
    struct list *forward = NULL, *trail = NULL;
    for(; top->next  != NULL; top = forward){
        forward = top->next;
        top->next = trail;
        trail = top;
    }
    top->next = trail; //connecting up top to trailing parts.
    return top;
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