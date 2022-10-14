/*
CH-230-A
a6_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
void set3bits(unsigned char character, int x, int y, int z)
{   
    unsigned int decimal = (unsigned int)character;
    //printing the decimal represantion of the character
    printf("The decimal representation is: %u\n", character);
    printf("The binary representation is: ");
    for (int idx = 7; idx >= 0; idx--)
    {
        if (decimal & (1 << idx))
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }
        if (idx == x || idx == y || idx == z)
        {
            decimal |= (1 << idx);
        }
    }
    printf("\nAfter setting the bits: ");
    for (int i = 7; i >= 0; i--)
    {
        if (decimal & (1 << i))
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }
    }
    printf("\n");
}
int main()
{
    unsigned char character;
    int x, y, z;
    //reading the character from the keyboard
    scanf("%c", &character);
    scanf(" %d %d %d", &x, &y, &z);
    set3bits(character, x, y, z);
    return 0;
}