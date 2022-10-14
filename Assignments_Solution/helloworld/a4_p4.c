/*
CH-230-A
a4_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[])
{
    int vowels = 0, consonants = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
                str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
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
    do
    {
        fgets(str, sizeof(str), stdin);
        if (str[0] != '\n')
        {
            printf("Number of consonants=%d\n", count_consonants(str));
        }
        else 
        {
            break;
        }
    } while (str[0] != '\n');
    // We use do while here instead of while because the condititon is to be entered after entering the string
    return 0;
}