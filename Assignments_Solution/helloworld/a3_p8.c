/*
CH-230-A
a3_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
void sum(float lv[])
{
    float nSum = 0;
    for (int idx = 0; lv[idx] != '\0'; idx++)
    {
        nSum = nSum + (float)lv[idx];               
    }
    printf("Sum is %f" ,nSum);
}
void average(float lv[])
{
    float nSum = 0;
    int i;
    for (i = 0; lv[i] != '\0'; i++){};
    for (int idx = 0; lv[idx] != '\0'; idx++)
    {
        nSum = nSum + (float)lv[idx];               
    }
    printf("\nAverage is %f" ,nSum/i);
}
int main() 
{
    float n[11];
    float num;
    int i;
    for (i = 0 ; i<10; i++)
    {
        printf("Enter Number: ");
        scanf("%f",&num);
        if(num == -99.0)
        {
            break;
        } 
        else 
        {
            n[i] = num;  
        }
    }
    if(num == -99.0)
    {
        n[i] = '\0';
    }
    else
    {
        n[i+1] = '\0';
    }
    sum(n);
    average(n);
    return 0;
}