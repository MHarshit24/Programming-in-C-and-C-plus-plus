#include <stdio.h>

/*
CH-230-A
a1_p2.c
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    int result;
    result = (2+7)*9/3;
    printf("The result is %d\n", result);
    /* "result" was missing as an argument to the printf function.
    This causes the printf function to randomly print integers. */
    return 0;
}