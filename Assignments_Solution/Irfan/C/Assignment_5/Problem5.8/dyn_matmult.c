#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a5_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//To input 2D integer nxm matrices
void inp2DMat(int** A, int n, int m);

//To allocate 2D integer nxm matrices
void init2DMat(int ***A, int n, int m);

//To free 2D integer nxm matrices
void free2DMat(int **A, int n);

//To print 2D integer nxm matrices
void print3DSec(int **A, int n, int m);

//To mutiply matrices and store by reference
void mult2DMat(int **A, int **B, int **O, int n, int m, int p);

//calls exit(1) if pointer p is null.
void check(void *p);

int main(){

    //Inputs and variable initialization!
    int n,m,p;
    int **A1 = NULL,**A2 = NULL,**O = NULL;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);

    //Allocate and input matrices A1,A2 and O (output)
    init2DMat(&A1,n,m);
    inp2DMat(A1,n,m);

    init2DMat(&A2,m,p);
    inp2DMat(A2,m,p);
    
    init2DMat(&O,n,p);

    //Outputs and Calc
    mult2DMat(A1,A2,O,n,m,p);

    printf("Matrix A:\n");
    print3DSec(A1,n,m);
    printf("Matrix B:\n");
    print3DSec(A2,m,p);
    printf("The multiplication result AxB:\n");
    print3DSec(O,n,p);

    //de-allocating matrices
    free2DMat(A1, n);
    free2DMat(A2,m);
    free2DMat(O,n);

    return 0;
}

//INPUT 2D
void inp2DMat(int **A, int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    return;
}

//ALLOCATES MEMORY
//Uses triple pointer in order to prevent data destruction.
void init2DMat(int ***A, int n, int m){
    *A = (int **) malloc(n*sizeof(int*));
    check((void*)A);
    for(int i = 0; i < n; i++){
        (*A)[i] = (int *) malloc(m*sizeof(int));
        check((void*)((*A)[i]));
    }
    return;
}

//DEALLOCATES MEMORY
void free2DMat(int **A, int n){
    for(int i = 0; i < n; i++)
        free((A)[i]);
    free((A));
    return;    
}

//PRINTS 2D MATRIX
void print3DSec(int **A, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return;
}

//MULTIPLIES MATRICES
void mult2DMat(int **A, int **B, int **O, int n, int m, int p){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++){
            int sum = 0;
            for(int k = 0; k < m; k++)
                sum += A[i][k]*B[k][j];
            O[i][j] = sum;    
        }                
}

void check(void *A){
    if(A == NULL){
        printf("Error! alloc failure");
        exit(1);
    }
    return;    
}