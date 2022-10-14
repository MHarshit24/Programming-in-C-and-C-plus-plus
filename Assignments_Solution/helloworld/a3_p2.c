/*
CH-230-A
a3_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() 
{
    char ch;
    int n, i;
    printf("Enter a lower case character: ");
    scanf("%c", &ch);
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i=0; i<=n; i++)
    {
        if (i==0)
        {
            printf("%c, ", ch);
        }
        else 
        {
            if (i==n)
            {
                printf("%c-%d", ch, i);
            }
            else
            {
                printf("%c-%d, ", ch, i);
            }
        }
    }
    return 0;
}