/*
CH-230-A
a3_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
int main () 
{
    char c;
    double temp[100];
    int n;
    double tempvalue;
    printf ("Enter a character: ");
    scanf("%c", &c);
    printf ("\nEnter an integer: ");
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        printf ("\nEnter temperature value: ");
        scanf("%lf", &tempvalue);
        temp[i]=tempvalue; 
    }
    int idx;
    double tempSum = 0;
    double sum = 0;
    switch(c)
    {
        case 's': 
        for (idx=0; idx<n ; idx++)
        {
            tempSum = tempSum + temp[idx];               
        }
        printf("Sum of all temperature: %lf\n", tempSum);
        break;
        case 'p': 
        for (idx = 0;  idx<n; idx++)
        {
            if(idx==(n-1))
            {
                printf("%lf", temp[idx]);
            }
            else
            {
                printf("%lf, ", temp[idx]);
            }           
        }
        break;
        case 't': 
        for (idx = 0; idx<n; idx++)
        {
            if(idx==(n-1))
            {
                printf("%lf", (((9*temp[idx])/5)+32));
            }
            else
            {
                printf("%lf, ", (((9*temp[idx])/5)+32));
            }        
        }
        break;
        default: 
        for (idx = 0; idx<n; idx++)
        {
            sum = sum + temp[idx];
        }
        printf("Average of all temperature: %lf\n", sum/(n*2));
        break;
    }
    return 0;
}