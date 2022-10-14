#include <stdio.h>
// # was missing for pre-processor, syntax error (compiler error)

/*
CH-230-A
a1_p2.3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    float result;
    int a = 3;
    float b = 13.5; // the type was incorrect. (NOT Compiler error)
    result = a/b;
    printf("The result is %f\n", result);
    /* %d is the wrong format and expects integers
     %f is used instead since "result" is a float. (garbage output) */
    return 0;
}