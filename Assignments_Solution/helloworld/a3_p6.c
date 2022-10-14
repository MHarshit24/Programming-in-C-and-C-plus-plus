/*
CH-230-A
a3_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
float to_pounds(int kg, int g)
{
    float pounds;
    pounds = (((float)g / 1000) + kg) * 2.2;
    return pounds;
}
int main()
{
    int kg, g;
    printf("Enter the mass in kilograms: ");
    scanf("%d", &kg);
    printf("\nEnter the mass in grams: ");
    scanf("%d", &g);
    printf("\nResult of conversion: %f", to_pounds(kg, g));
    return 0;
}