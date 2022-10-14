#include <stdio.h>

/*
CH-230-A
a5_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


//required functions
double sclprod(double v1[], double v2[], int n);
void printsmall(double v[], int n);
void printbig(double v[], int n);

//function to input values, stores by reference
void vInp(double v[], int n);

int main(){

    //initializing and setting up variables.
    int n; 
    scanf("%d",&n);

    double v1[n], v2[n];
    vInp(v1,n);
    vInp(v2,n);

    //outputs
    printf("Scalar product=%lf\n", sclprod(v1,v2,n));
    printsmall(v1,n);
    printbig(v1,n);
    printsmall(v2,n);
    printbig(v2,n);

    return 0;
}

//scalar product function
double sclprod(double v1[], double v2[], int n){
    double sum = 0;
    for (int i =0; i < n; i++)
        sum += v1[i] * v2[i];
    return sum;    
}

//finds position of smallest element and then prints
void printsmall(double v[], int n){
    int pos = 0;
    for(int i = 0; i < n; i++)
        if(v[i] < v[pos])
            pos = i;

    printf("The smallest = %lf\n", v[pos]);
    printf("Position of smallest = %d\n", pos);
    return;
}

//finds position of largest element and then prints
void printbig(double v[], int n){
    int pos = 0;
    for(int i = 0; i < n; i++)
        if(v[i] > v[pos])
            pos = i;

    printf("The largest = %lf\n", v[pos]);
    printf("Position of largest = %d\n", pos);
    return;
}

void vInp(double v[], int n){
    for(int i = 0; i < n; i++)
        scanf("%lf",&v[i]);
    return;
}