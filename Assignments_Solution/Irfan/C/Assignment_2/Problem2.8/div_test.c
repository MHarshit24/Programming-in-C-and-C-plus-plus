#include <stdio.h>

/*
CH-230-A
a2_p8 
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //input
    int a;
    scanf("%d",&a);

    //output
    if (a%14==0)
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
    
    return 0;        
}