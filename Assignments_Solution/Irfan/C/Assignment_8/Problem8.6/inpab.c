#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a8_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //inputs for filename specification
    char s1[30], s2[30];
    printf("Please include .txt in your files\n");
    printf("Input file A = ");
    scanf("%s", s1);
    printf("Input file B = ");
    scanf("%s", s2);

    //File open and testing
    FILE *A, *B, *OUT;
    A = fopen(s1, "r");
    B = fopen(s2, "r");
    OUT = fopen("results.txt", "w");
    if(A == NULL || B == NULL || OUT == NULL){
        printf("File open failure");
        exit(1);
    }

    //File inputs and Computation;
    double p , q;
    fscanf(A, "%lf", &p);
    fscanf(B, "%lf", &q);

    fprintf(OUT, "%lf\n", p+q);
    fprintf(OUT, "%lf\n", p*q);
    fprintf(OUT, "%lf\n", p-q);
    fprintf(OUT, "%lf\n", p/q);

    //file close and program end
    fclose(A);
    fclose(B);
    fclose(OUT);
    return 0;
}