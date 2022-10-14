#include <stdio.h>

/*
CH-230-A
a1_p4.c
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    int x = 17, y = 4; //initialize values and print arithmetic operations.
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", x+y);
    printf("product=%d\n",x*y);
    printf("difference=%d\n",x-y);
    printf("division=%f\n", (float)x/y);
    printf("remainder of division=%d\n", x%y);
    return 0;
}