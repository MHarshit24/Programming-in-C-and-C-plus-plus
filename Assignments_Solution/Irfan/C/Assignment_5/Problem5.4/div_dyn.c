#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a5_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
void divby5(float arr[], int size);
//to print array
void printArr(float arr[], int size);

int main(){

    //inputs, dyn alloc and loop for array
    float *A;
    int n;
    printf("Number of inputs = ");
    scanf("%d", &n);

    A = (float*) malloc(n*sizeof(float));
    if (A == NULL){
        printf("Allocation Failure");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        printf("A[%d] = ", i);
        scanf("%f",&A[i]);
    }

    //outputs
    printf("Before:\n");
    printArr(A, n);
    
    divby5(A,n); //calc
    printf("After:\n");
    printArr(A,n);

    free(A);

    return 0;
}

void divby5(float arr[], int size){
    for(int i = 0; i < size; i++)
        arr[i] = arr[i]/5;
    return;     
}

void printArr(float arr[], int size){
    for(int i = 0; i < size; i++)
        printf("%.3f ",arr[i]);
    printf("\n");
    return;
}
