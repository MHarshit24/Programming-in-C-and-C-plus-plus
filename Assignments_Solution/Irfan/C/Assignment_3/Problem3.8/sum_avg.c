#include <stdio.h>

/*
CH-230-A
a3_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function prototypes
float sumFs(float A[], int n); 
float avgFs(float A[], int n);

int main(){

    float inps[10], input = 0;
    int dim = 0; 

    //input management
    while(input != -99.0 && dim < 10){
        printf("n%d = ",dim + 1); //index from 1 - 10
        scanf("%f",&input);
        if (input == -99.0)
            break;
        inps[dim] = input;  //store and dim++ after input validation.
        dim++;
    }

    printf("Sum = %f\n", sumFs(inps,dim));
    printf("Avg = %f\n", avgFs(inps,dim));

    return 0;

}

//function definitions ahead.

float sumFs(float A[], int n){
    float sum = 0;
    for (int i = 0; i < n;i++)
        sum += A[i];
    return sum;    
}

float avgFs(float A[], int n){
    return sumFs(A,n)/n;
}