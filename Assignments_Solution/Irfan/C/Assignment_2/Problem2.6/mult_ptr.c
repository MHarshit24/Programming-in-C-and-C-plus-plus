#include <stdio.h>

/*
CH-230-A
a2_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //inputs
    double x,y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);

    //pointer setup
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    //output
    printf("\nptr_one = %p\n",ptr_one);
    printf("ptr_two = %p\n", ptr_two);
    printf("ptr_three = %p\n", ptr_three);

    return 0;
}