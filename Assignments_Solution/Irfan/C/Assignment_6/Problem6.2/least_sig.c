#include <stdio.h>

/* 
CH-230-A
a6_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//The macro. bits & 00000001 
#define LEAST(a) (a & 1)

int main(){
    //inputs
    unsigned char inp;
    scanf("%c", &inp);

    //outputs
    printf("The decimal representation is: %d\n", inp);
    printf("The least significant bit is: %d\n", LEAST(inp));

    return 0;
}