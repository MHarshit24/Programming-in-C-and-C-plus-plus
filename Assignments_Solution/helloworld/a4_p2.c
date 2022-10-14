/*
CH-230-A
a4_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int length, i;
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    //It is important to determine the length of the string because the string can be of any size
    for (i=0; i<=length; i++)
    {
        if (i % 2 == 0)  //Prints the following for even number of i
        {
            printf("%c\n", str[i]);
        }
        else  //Prints the following for odd numbers of i
        {
            printf(" %c\n", str[i]);
        }
    }
    return 0;
}