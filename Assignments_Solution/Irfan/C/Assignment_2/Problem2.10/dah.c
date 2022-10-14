#include <stdio.h>

/*
CH-230-A
a2_p10
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    int n = 0;
    int flag = 0; //for nice error message

    //input handling
    while( n < 1 ){
        if (flag)
            printf("\nPlease type a positive integer\n");
        printf("n = ");
        scanf("%d",&n);
        flag = 1;
    }        

    printf("\n"); // pretty printing

    //output
    int i = 1;
    while (i <= n){
        printf("%d day = %d hours\n", i, 24*i);
        i++;
    }

    return 0;   
}