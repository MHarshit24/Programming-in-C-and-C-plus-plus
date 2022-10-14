/*
CH-230-A
a6_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#define INTERMEDIATE 1
int main()
{
    int sum = 0, n, x[10], y[10], i;
    scanf("%d", &n);
    //Running a loop to read the numbers
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &y[i]);
    }
    //Running if function to know whether it is intermediate
    if (INTERMEDIATE)
    {
        printf("The intermediate product values are: ");
        for (int i = 0; i < n; i++) 
        {
            printf("\n%d", x[i] * y[i]);
            sum = sum + x[i] * y[i];
        }
    }
    else
        for (int i = 0; i < n; i++)
        {
            sum = sum + x[i] * y[i];
        }
    printf("\nThe scalar product is: %d", sum);
    return 0;
}