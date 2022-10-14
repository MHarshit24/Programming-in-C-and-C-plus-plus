#include <stdio.h>

/*
CH-230-A
a2_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //initialization
    int calc = 0;
    int store;

    //input and calculation
    printf("Weeks: ");
    scanf("%d",&store);
    calc = calc + 7*24*store;
    printf("Days: ");
    scanf("%d", &store);
    calc = calc + 24*store;
    printf("Hours: ");
    scanf("%d", &store);
    calc = calc + store;

    //output
    printf("\nTotal hours is %d", calc);
    return 0;
}