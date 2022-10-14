#include <stdio.h>

/*
CH-230-A
a2_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //grab input
    char input;
    scanf("%c", &input);

    //print out the formats.
    printf("character=%c\n", input);
    printf("decimal=%d\n", input);
    printf("octal=%o\n",input);
    printf("hexadecimal=%x\n",input);

    return 0;
}