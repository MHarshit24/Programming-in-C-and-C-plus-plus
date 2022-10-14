#include <stdio.h>

/*
CH-230-A
a4_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//To print under main diagonal
void printUoDgn(int A[][30], int n);
//To print entire matrix. Reuse code.. later.. stonks..
void printMat(int A[][30], int n);

int main(){

    //inputs
    int A[30][30], n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d",&A[i][j]);

    //outputs
    printf("The entered matrix is:\n");
    printMat(A,n);
    printf("Under the secondary diagonal:\n");
    printUoDgn(A,n);

    return 0;        
}

// Start j at first element under secondary diagonal. 
void printUoDgn(int A[][30], int n){

    for(int i = 0; i < n; i++)
        for(int j = n-i; j < n ; j++)
            printf("%d ", A[i][j]);
    printf("\n");
    return;
}


void printMat(int A[][30], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");    
    }
    return;
}