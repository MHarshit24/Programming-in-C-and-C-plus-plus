#include <stdio.h>

/*
CH-230-A
a3_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

void print_form(int n, int m, char c);

int main(){

    //inputs for n and m, and then c.
    int n,m;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);

    getchar(); //to remove '\n' from input stream
    char c;
    printf("c = ");
    scanf("%c",&c);

    //outputs
    printf("\n\n");
    print_form(n,m,c);

    return 0;
}

void print_form(int n, int m, char c){

    //nested loop for trapezoid printing. j < m+i is key for shape.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m+i; j++)
            printf("%c",c);
        printf("\n");    
    }

    return;
}