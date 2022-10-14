#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/* 
CH-230-A
a6_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/



int main(){

    //setup
    struct list *head = NULL;

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
                break;
        }
    }
    return 0;
}
