/*
CH-230-A
a3_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
float convert(int cm) 
{
    float km;
    km = (float)cm/100000;
    return km;
}
int main() 
{
    int cm;
    scanf("%d", &cm);
    printf("Result of conversion: %f",convert(cm));
    return 0;
}

