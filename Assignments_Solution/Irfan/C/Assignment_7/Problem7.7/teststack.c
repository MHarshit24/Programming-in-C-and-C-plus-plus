#include <stdio.h>
#include "stack.h"

/* 
CH-230-A
a7_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    struct stack S;
    S.count = 0;
    int temp;
    char choice;

    //flag for while loop
    int flag = 1;
    while(flag){
        scanf("%c", &choice);
        getchar(); //removes the last '\n' from the input buffer
        switch(choice){
            case 's':
                scanf("%d", &temp);
                getchar();
                push(&S,temp);
                break;
            case 'p':
                pop(&S);
                break;
            case 'e':
                empty(&S);
                //printf done inside function empty.
                break;
            case 'q':
                flag = 0;
                printf("Quit\n");
                break;
            default:
                break;
        }
        
    }

    return 0;
}