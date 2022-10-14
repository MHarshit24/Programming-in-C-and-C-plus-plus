#include <stdio.h>

/*
CH-230-A
a5_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    int n = 0;
    scanf("%d",&n);
    char c;
    scanf("\n%c", &c);

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++)
            printf("%c",c);
        printf("\n");        
    }        

    return 0;

}