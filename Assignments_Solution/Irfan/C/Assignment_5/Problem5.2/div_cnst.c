#include <stdio.h>

/*
CH-230-A
a5_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
void divby5(float arr[], int size);
//to print array
void printArr(float arr[], int size);

int main(){

    float A[] = {5.5,6.5,7.75,8,9.6,10.36}; //setup

    //outputs
    printf("Before:\n");
    printArr(A, 6);
    
    divby5(A,6); //calc
    printf("After:\n");
    printArr(A,6);

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
