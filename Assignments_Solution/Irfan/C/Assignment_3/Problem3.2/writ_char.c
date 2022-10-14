#include <stdio.h>

/*
CH-230-A
a3_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //inputs are safe, so no checks
    char ch;
    printf("ch = ");
    scanf("%c",&ch);

    int n;
    printf("n = ");
    scanf("%d",&n);

    //pretty printing
    printf("\n\n");

    //output
    for (int i = 0; i <= n; i++)
        printf("ch - %d = %c\n",i,ch-i);

    return 0;
    
}