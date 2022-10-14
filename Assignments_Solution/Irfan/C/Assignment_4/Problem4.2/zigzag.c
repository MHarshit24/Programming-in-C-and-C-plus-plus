#include <stdio.h>

/*
CH-230-A
a4_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    char S[50];
    fgets(S,sizeof(S),stdin);

    //flag tracks zig zags
    int flag = 1;
    //fgets stores \n, so loop until not '\n'
    for(char *p = S; *p != '\n'; p++){ 
        if (flag){
            printf("%c\n", *p);
            flag = 0;
        }
        else {
            printf(" %c\n", *p);
            flag = 1;
        }
    }

    return 0;
}