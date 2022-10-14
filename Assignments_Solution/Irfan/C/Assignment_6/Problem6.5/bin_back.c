#include <stdio.h>

/* 
CH-230-A
a6_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//prints binary backwards
void printBinBack(int n);

int main(){
    //inputs
    unsigned char inp;
    scanf("%c", &inp);

    //outputs
    printf("The decimal representation is: %d\n", inp);
    printf("The backwards binary representation is: ");
    printBinBack(inp);
    printf("\n");

    return 0;

}

//Prints exactly and only the binary backwards.
void printBinBack(int n){
    for(int i = 0; n >> i > 0; i++)
        printf("%d", 1 & (n >> i));
}