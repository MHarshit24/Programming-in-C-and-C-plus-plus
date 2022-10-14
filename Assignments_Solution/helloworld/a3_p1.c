/*
CH-230-A
a3_p1.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    int n, i;
    float x;
    printf("\nEnter a value for x: ");
    scanf("%f", &x);
    printf("\nEnter a value for n: ");
    scanf("%d", &n);
    while (n<=0)
    { 
        printf("\nInput is invalid, reenter value ");
        scanf("%d", &n);
    }
    for(i=0; i<n; i++){
        printf("\n%f", x);
    }
    return 0;
}