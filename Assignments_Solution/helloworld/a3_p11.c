/*
CH-230-A
a3_p11.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 1; str[idx] != c && str[idx] != '\0'; idx++)
    {
        /* do nothing */   
    }
    return idx;
}
int main() 
{
    char one[80];
    char two[80];
    printf("Enter first string: ");
    fgets(one, sizeof(one), stdin);
    printf("\nEnter second string: ");
    fgets(two, sizeof(two), stdin);
    printf("\nlength1= %ld", strlen(one));
    printf("\nlength2= %ld", strlen(two));
    printf("\nconcatenation= %s", strcat(one, two));
    char three[80];
    printf("\ncopy= %s", strcpy(three, two));
    int result;
    result = strcmp(one, two);
    if (result == 0)
    {
        printf("\nStrings are equal");    
    }
    else 
    {
        if (result > 0)
        {
            printf("\none is smaller than two");
        }
        else
        {
            printf("\ntwo is smaller than one");
        }
    }
    char c;
    printf("\nEnter a character for first occurence of it in second string: ");
    scanf("%c", &c);
    printf("\nposition= %d", position(two, c));
    return 0; 
}