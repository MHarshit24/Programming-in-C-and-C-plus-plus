#include <stdio.h>

/*
CH-230-A
a#_p# <------FILL
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int position(char str[], char c){
    int idx;
    // was missing the semicolon
    // now the loop evals and stores pos in idx.
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);
    /*
        Previously, the return statement was the body of the for loop
        So it would return 0 and control on the first iteration.
    */
    return idx;
}
int main(){   
    char line[80];
    while (1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}