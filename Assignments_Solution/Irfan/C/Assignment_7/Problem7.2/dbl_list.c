#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a7_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

struct dList{
    char a;
    struct dList *next;
    struct dList *prev;
};

//function to add node at start.
struct dList* addDL(struct dList *top, char c);

//function to remove char cs from dList with head top.
struct dList* remCDL(struct dList *top, char c);

//function to print dList
void printDL(struct dList *top);

//function to reverse list
struct dList* revDL(struct dList *top);

//function to goodbye the dList.
void delDL(struct dList *top);

int main(){
    struct dList *head = NULL;
    int choice;
    char input;

    int flag = 1;
    while(flag){
        scanf("%d",&choice);
        switch(choice){
            case 1:
                getchar();
                scanf("%c", &input);
                head = addDL(head, input);
                break;
            case 2:
                getchar();
                scanf("%c", &input);
                head = remCDL(head, input);
                break;
            case 3:
                printDL(head);
                printf("\n");
                break;
            case 4:
                head = revDL(head);
                printDL(head);
                printf("\n");
                head = revDL(head);
                break;
            case 5:
                delDL(head);
                flag = 0;
                break;

            default:
                printf("Invalid choice, choose (1/2/3/4/5)\n");
                break;
        }
    }

    return 0;
}

//adds node at beginning.
struct dList* addDL(struct dList* top, char c){
    struct dList *new = (struct dList*) malloc(sizeof(struct dList));
    if(new==NULL){
        printf("Malloc failure!");
        exit(0);
    }
    new->a = c;
    new->next = NULL;
    new->prev = NULL;
    if (top == NULL)
        return new;
    new->next = top;
    top->prev = new;

    return new;
}

//retHead needed since first node might be deleted.
struct dList* remCDL(struct dList *top, char c){
    int flag = 1;
    struct dList *temp = NULL;
    struct dList *retHead = top;
    while(top != NULL){
        if(top->a == c){
            flag = 0;
            //linked list logic
            if(top->prev != NULL)
                (top->prev)->next = top->next;
            if(top->next != NULL)
                (top->next)->prev = top->prev;
           
            //move return pointer if it needs to be deleted.
            if(top == retHead)
                retHead = retHead->next;

            //setup for dealloc
            temp = top;
        }
        
        top = top->next;
        if(temp != NULL){
            free(temp);
            temp = NULL;
        }
    }
    
    if(flag)
        printf("The element is not in the list!\n");
    return retHead;
}

//prints integers with space after each ele. no newline at end.
//function to print list
void printDL(struct dList *top){
    if (top == NULL)
        return;

    //pointer top is temp variable, can update it.
    for (;top != NULL; top = top->next)
        printf("%c ", top->a);  
    return;    
}

//swap prevs and nexts.
//returns last element as new head.
struct dList* revDL(struct dList *top){
    struct dList* temp = NULL;
    struct dList* retHead = top;
    while(top != NULL){
        temp = top->next;
        top->next = top->prev;
        top->prev = temp;

        retHead = top;
        top = temp; //since original temp = top->next;
    }

    return retHead;
}

//deletes doubly linked list one by one.
void delDL(struct dList *top){
    struct dList* temp;
    while(top != NULL){
        temp = top;
        top = top->next;
        free(temp);
    }
}