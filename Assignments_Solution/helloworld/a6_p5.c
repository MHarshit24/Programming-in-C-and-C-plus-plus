/*
CH-230-A
a6_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned char character;
    scanf("%c", &character);
    printf("The decimal representation is: %d", character); 
    int size= 0,  num = character;
    for(int i = 0; i < 8; i++)
    {
        //checking if the decimal representation of the character is greater than 2 raise to i
        if (num > pow(2,i))
        {
            size++;
        }
        else
        {
        }
    }
    int backward_representation;
    printf("\nThe backwards binary representation is: ");
    for (int i = 0; i < size; ++i)
    {
        //the following is to get the backward binary representation
        backward_representation = ((num & (1 << i)) == 0) ? 0 : 1;
        printf("%d", backward_representation);
    }
        printf("\n");
    return 0;
}