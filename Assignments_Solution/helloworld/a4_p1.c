/*
CH-230-A
a4_p1.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include <math.h>
int main() 
{
    float upperlimit, lowerlimit, stepsize;
    scanf("%f", &lowerlimit);
    scanf("%f", &upperlimit);
    scanf("%f", &stepsize);
    float i;
    // for loop for printing the area, perimeter, and circumference
    for (i=lowerlimit; i<=upperlimit; i+=stepsize)
    {
        printf("%f %f %f\n", i, (i*i*M_PI), (2*M_PI*i));
        // Printing lower limit until it gets to upper limit
    }
    return 0;
}