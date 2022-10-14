/*
CH-230-A
a6_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char character;
    //reading character from the keyboard
    scanf("%c", &character);
    //Printing the decimal representation of the character
    printf("The decimal representation is: %d\n", character);
    printf("The binary representation is: ");
    for (int idx = 7; idx >= 0; idx--)
    {
        printf("%u", (character >> idx) & 1);
    }
    printf("\n");
}