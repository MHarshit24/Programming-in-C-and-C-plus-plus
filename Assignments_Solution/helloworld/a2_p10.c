/*
CH-230-A
a2_p10.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() 
{
    int i, n;
    i = 1;
    printf("\nEnter the number of days: ");
    scanf("%d", &n);
    if (n>0)
    {
        while (i<=n)
        {
            printf("\n%d days=%d hours", i, (i*24));
            i++;
        }
    }
    else
    {
        while (n<0)
        {
            printf("\nThe entered value was invalid, please enter a valid value: ");
            scanf("%d", &n);
        }
        while (i<=n)
        {
            printf("\n%d days=%d hours", i, (i*24));
            i++;
        }
    }
    return 0;
}