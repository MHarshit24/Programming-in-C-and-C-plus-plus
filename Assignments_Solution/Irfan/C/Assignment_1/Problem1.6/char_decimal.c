#include <stdio.h>

/*
CH-230-A
a1_p6.c 
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    char c = 'F';

    char third = c+3;
    // third from character 'a' is understood to be character 'd'
    // so third not counting the current.

    printf("Third character after variable 'c' is %c\n",third);
    printf("Third character in ASCII is %d\n", third); 
    //character information is stored as integer, so %d reveals value.

    return 0;
}