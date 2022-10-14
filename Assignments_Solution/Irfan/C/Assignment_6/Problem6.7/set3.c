#include <stdio.h>
#include <math.h>

#define uInt (unsigned int)

/* 
CH-230-A
a6_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
void set3bits(unsigned char *c, int x, int y, int z);

//function to print exactly and only binary digits.
void printBin(int n, int nDigs);



int main(){
    //inputs
    unsigned char c;
    int x,y,z;
    scanf("%c", &c);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    //outputs
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    printBin((int)c, sizeof(char)*8); //(size_in_bytes*8)
    printf("\n");
    //calculations
    set3bits(&c,x,y,z);
    printf("After setting the bits: ");
    printBin((int)c, sizeof(char)*8);
    printf("\n");

    return 0;

}

//uses a macro to be under 80 characters
void set3bits(unsigned char *c, int x, int y, int z){
    unsigned int mask = uInt(pow(2,x)) | uInt(pow(2,y)) | uInt(pow(2,z));
    *c = *c | mask;
    return;
}

//prints exactly and only the binary representation
//for loop is a little wack, starts printing from left most digit.
void printBin(int n, int nDigs){
    for(int i = nDigs-1; i >= 0; i--)
        printf("%d", 1 & (n >> i));
    return;    
}