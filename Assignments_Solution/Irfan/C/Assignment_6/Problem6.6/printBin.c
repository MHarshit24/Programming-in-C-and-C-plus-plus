#include <stdio.h>
#include <math.h>

/* 
CH-230-A
a6_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//prints binary of n upto nDigits
void printBin(int n, int nDigs);

int main(){
    //inputs
    unsigned char inp;
    scanf("%c", &inp);

    //outputs
    printf("The decimal representation is: %d\n", inp);
    printf("The binary representation is: ");
    printBin(inp, sizeof(inp)*8); //(number of bytes) * 8
    printf("\n");

    return 0;
}

//prints exactly and only the binary representation
//for loop is a little wack, starts printing from left most digit.
void printBin(int n, int nDigs){
    for(int i = nDigs-1; i >= 0; i--)
        printf("%d", 1 & (n >> i));
    return;    
}
