#include <stdio.h>

/*
CH-230-A
a1_p2.c
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    double result = (double)(3+1)/5; 
    /* The result of integer division looses the decimal part.
     So the type of (3+1) is cast into double before dividing.
     */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}