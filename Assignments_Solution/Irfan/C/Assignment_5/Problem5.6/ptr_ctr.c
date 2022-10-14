#include <stdio.h>

/*
CH-230-A
a4_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//a function that satisfies the problem statement.
int ptrCtr(float A[]);

int main(){

    //inputs
    int n;
    scanf("%d",&n);

    float A[n];
    
    for(int i = 0; i < n; i++)
        scanf("%f", &A[i]);

    //output
    printf("Before the first negative value: %d elements\n", ptrCtr(A));

    return 0;    
}

//uses only ptr arithmetic
//Assumes input is valid and contains at least 1 negative
int ptrCtr(float A[]){
    float *p = A;

    printf("Address of A= %p \nAddress of p= %p \n", A, p);
    for(; *p  >= 0; p++) ; //empty loop to update ptr p
    printf("Address of A= %p \nAddress of p= %p \n", A, p);


    printf("Raw Subtract = %d, or %p", p-A, p-A);
    return (p - A); //subtracting ptrs returns diff of index not bytes
}



/*

(char *
*/