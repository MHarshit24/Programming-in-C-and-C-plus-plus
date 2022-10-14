/*
CH-230-A
a2_p9.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a letter\n", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else 
    {
        printf("%c is some other symbol\n", ch);
    }
    return 0;
}