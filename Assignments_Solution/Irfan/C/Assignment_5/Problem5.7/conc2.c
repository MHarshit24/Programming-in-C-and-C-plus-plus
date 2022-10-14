#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
CH-230-A
a5_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    char A[100],B[100],*C;
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    //to remove '\n'
    A[strlen(A) - 1] = '\0'; 

    // +1 to include space for \0
    int size = (strlen(A)) + (strlen(B)+1);
    C = (char*) malloc(sizeof(char)*(size));
    if(C == NULL)
        exit(1);
    C[0] = '\0';

    strcat(C,A);
    strcat(C,B);
    printf("Result of concatenation: %s", C);

    return 0;
}
