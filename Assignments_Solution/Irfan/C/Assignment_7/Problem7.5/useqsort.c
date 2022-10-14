#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a7_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//interprets A and B as ints
//A < B returns -1
int asc(const void *A, const void *B);

//interprets A and B as ints
// A < B returns 1
int desc(const void *A, const void *B);

//prints integer array
void printA(int A[], int n);

int main(){

    //inputs and initialization
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i ++)
        scanf("%d", &A[i]);

    //while loop setup
    char inp;
    int flag = 1;
    while(flag){
        getchar();
        scanf("%c", &inp);
        switch(inp){
            case 'a':
                qsort(A, n, sizeof(int), asc);
                printA(A, n);
                break;
            case 'd':
                qsort(A, n, sizeof(int), desc);
                printA(A,n);
                break;
            case 'e':
                //printf("Exiting...\n");
                flag = 0;
                break;
            default:
                printf("Invalid choice, (d/a/e)\n");
                break;
        }
    }

    return 0;
}

//interprets A and B as ints
//A < B returns -1
int asc(const void *A, const void *B){
    int a = *(int *)A;
    int b = *(int *)B;
    return (a < b) ? -1 : (a > b ? 1 : 0);
}

//interprets A and B as ints
// A < B returns 1
int desc(const void *A, const void *B){
    int a = *(int *)A;
    int b = *(int *)B;
    return (a < b) ? 1 : (a > b ? -1 : 0); 
}

//prints integer array
void printA(int A[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return;
}