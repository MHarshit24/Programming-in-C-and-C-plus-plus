/*
CH-230-A
a5_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count_lower(char* str)
{
    int lower_chars = 0;
    for (; *str != '\0'; str++)
    {
        if('a' <= *str && *str <= 'z')
        {
            lower_chars++;
        }
    }
    return lower_chars;
}
int main()
{
    char arr[500];
    while(1)
    {
        fgets(arr, sizeof(arr), stdin);
        if(arr[0] == '\n')
        {
            break;
        }    
        else
        {
            int low_c = count_lower(arr);
            printf("There are %i lowercase characters in the string.\n", low_c);
        }
    }
    return 0;
}