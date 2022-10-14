/*
CH-230-A
a3_p9.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
double sum25(double v[], int n)
{
    double sum;
    if(n>5)
    {
    sum = v[2]+v[5];
    printf("\nsum= %lf", sum);
    }
    else 
    {
        printf("-111");
    }
    return sum;
}
int main()
{
    int n;
    double numvalue, v[20];
    printf ("Enter an integer: ");
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        printf ("\nEnter number value: ");
        scanf("%lf", &numvalue);
        v[i]=numvalue; 
    }
    sum25(v, n);
    return 0;
}