#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a4_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//Required function
int prodminmax(int Arr[], int n);


int main(){
    
    //inputs and memory allocation
    int n;
    printf("Number of values = ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Malloc Failure.. exiting\n");
        exit(1);
    }
       
    //pretty printing and reading inputs
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("Value N%d = ", i);
        scanf("%d", &arr[i]);
    }

    //pretty printing and outputs
    printf("\n");
    printf("The product of min and max values = %d", prodminmax(arr,n));

    free(arr);

    return 0;
}


int prodminmax(int Arr[], int n){
    if (Arr == NULL){
        return -1;
    }
    
    //Local minimum.
    int min = Arr[0];
    int max = Arr[0];

    //Find min and max
    for(int i =0; i < n; i++){
        if(Arr[i] > max)
            max = Arr[i];

        if(Arr[i] < min)
            min = Arr[i];    
    }

    return min*max;
}