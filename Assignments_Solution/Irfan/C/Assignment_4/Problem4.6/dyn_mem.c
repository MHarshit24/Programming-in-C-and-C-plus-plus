#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a4_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function to print big two.
void findPrintBigs(int A[], int n);

int main(){
    int n, *dynA;

    printf("Number of elements = ");
    scanf("%d", &n);

    //DYNAMIC MEMORY ALLOCATION GO!
    dynA = (int*) malloc(sizeof(int)*n);

    //checking if it worked.
    if (dynA == NULL)
        exit(1);

    findPrintBigs(dynA, n);

    free(dynA);
    return 0;

}


/* function prints biggest value only once even if it appears twice in an array.
can use big2 = big1 without a check to print biggest value twice.
but I think I should interpret the question as meaning the two greatest
values that appears in the array, and not the last two in an ascending arrangement */

void findPrintBigs(int A[], int n){
    int big1 = A[0], big2 = A[0];

    for (int i = 0; i < n; i++){
        if (A[i] >= big1){
            if (big1 > big2)  //big2 updates if it is strictly less than curret
                big2 = big1;
            big1 = A[i];
        }
    }
}