/*
CH-230-A
a4_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char *ptr)
{
    int vowels = 0, consonants = 0;
    for(int i=0; ptr[i]!='\0'; i++)
    {
        if ((ptr[i]>='a' && ptr[i]<='z') || (ptr[i]>='A' && ptr[i]<='Z'))
        {
            if (ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o' || ptr[i]=='u' || 
                ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I' || ptr[i]=='O' || ptr[i]=='U')
            // The condition in the if statement should cotain both upper case and lower case letters
            {
                vowels++;
            }
            else 
            {
                consonants++;
            }
        }
        else
        {
        }
    }
    return consonants;
}
int main()
{
    char str[100];
    char *ptr;
    ptr = str;
    do
    {
        fgets(str, sizeof(str), stdin);
        if (ptr[0] != '\n')
        {
            printf("Number of consonants=%d\n", count_consonants(ptr));
        }
        else 
        {
            break;
        }
    } while (ptr[0] != '\n');
    // We use do while here instead of while because the condititon is to be entered after entering the string
    return 0;
}