#include <stdio.h>
#include "stack.h"

/* 
CH-230-A
a8_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//A function that utilizes stack implementation
void printBin(int d);

int main(){
    int n;
    scanf("%d", &n);
    printf("The binary representation of %d is ", n);
    printBin(n);
    return 0;
}


void printBin(int d){
    struct stack s;
    s.count = 0;

    //stack up remainders
    while(d > 0){
        push(&s, d % 2);
        d = d/2;
    }

    //pop remainders
    while(!isEmpty(&s))
        printf("%d", pop(&s));

    return;
}