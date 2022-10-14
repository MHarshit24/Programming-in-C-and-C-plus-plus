/*
CH-230-A
a6_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#define Bitwise_operator(a, b) (a & b)
int main()
{
    unsigned char character;
    // Reading the character from the keyboard
    scanf("%c", &character);
    //Printing the integer corresponding to the entered character
    printf("The decimal representation is: %d\n", character);
    if (Bitwise_operator(character, 1))
    {
        printf("The least significant bit is: 1");
    }
    else
    {
        printf("The least significant bit is: 0");
    }
    return 0;
}
