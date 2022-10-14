#include <stdio.h>

/* 
CH-230-A
a6_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//code for assignment in this function
int sclProd(int v1[], int v2[], int n);

//function to input values to an integer array.
void vInp(int v1[], int n);

//remove this for conditional compilation.
#define INTERMEDIATE

int main(){
    //inputs
    int n;
    printf("n = ");
    scanf("%d", &n);

    int v1[n], v2[n];
    printf("Inputs for v1:\n");
    vInp(v1,n);
    printf("Inputs for v2:\n");
    vInp(v2,n);

    //outputs
    printf("The scalar product is: %d", sclProd(v1,v2,n));

    return 0;
}

//scalar product function
int sclProd(int v1[], int v2[], int n){
    int sum = 0;
    #if defined(INTERMEDIATE)
        printf("The intermediate product values are:\n");
    #endif
    for (int i = 0; i < n; i++){
        #if defined(INTERMEDIATE)
            printf("%d\n",v1[i]*v2[i]);
        #endif
        sum += v1[i] * v2[i];
    }    
    return sum;    
}

//function to input values.
void vInp(int v[], int n){
    for(int i = 0; i < n; i++)
        scanf("%d",&v[i]);
    return;
}