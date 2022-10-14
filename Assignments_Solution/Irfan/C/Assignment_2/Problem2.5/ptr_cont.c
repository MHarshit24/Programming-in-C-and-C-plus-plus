#include <stdio.h>

/*
CH-230-A
a2_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //input
    int a;
    printf("\ninteger a = ");
    scanf("%d",&a);

    //output pre-modified a and setup ptr_a
    printf("\na = %d\n",a);

    int *ptr_a = &a;
    printf("ptr_a = %p\n",ptr_a);

    //output modified values
    *ptr_a = *ptr_a  + 5;
    printf("\nmodified a = %d\n",a);
    printf("ptr_a = %p\n\n",ptr_a);

    return 0;
}