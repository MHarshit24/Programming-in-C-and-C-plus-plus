#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a5_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//To print 2D integer nxm matrices
void print3DSec(int ***A, int row, int col, int depth);


int main(){

    //variable setup
    int ***A, row, col, depth;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &depth);

    //3D array malloc and inputs
    A = (int ***) malloc(row*sizeof(int**));
    for(int i = 0; i < row; i++){
        A[i] = (int **) malloc(col*sizeof(int *));
        for(int j = 0; j < col; j++){
            A[i][j] = (int *) malloc(depth*sizeof(int));
            for(int k = 0; k < depth; k++){
                scanf("%d", &A[i][j][k]);
            }    
        }
    }

    //outputs
    print3DSec(A, row, col, depth);

    //deallocate 3D matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            free(A[i][j]);
        free(A[i]);    
    }        
    free(A);

    return 0;
    
}

//PRINTS 2D XOY MATRICES
void print3DSec(int ***A, int row, int col, int depth){
    for(int k = 0; k < depth; k++){
        printf("Section %d:\n",k+1);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                printf("%d ", A[i][j][k]);
            }    
            printf("\n");
        }
    }
    return;
}
