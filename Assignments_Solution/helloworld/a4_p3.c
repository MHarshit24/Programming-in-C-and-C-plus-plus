/*
CH-230-A
a4_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
float geometric_mean(float arr[], int i)
{
    float product = 1;
    for (int idx =0; arr[idx] != '\0'; idx++)
    {
        product = product * arr[idx];
    }
    float gmean = (float)pow(product, 1 / i);
    return gmean;
}
float largest(float arr[])
{
    float largest = arr[0];
        for (int idx = 0; arr[idx] != '\0'; idx++) 
        {
            if (arr[idx] > largest) 
            {
                largest = arr[idx];
            }
        }
        return largest;
}
float smallest(float arr[])
{
    float smallest = arr[0];
        for (int idx = 0; arr[idx] != '\0'; idx++) 
        {
            if (arr[idx] < smallest) 
            {
                smallest = arr[idx];
            }
        }
        return smallest;
}
float sum(float arr[])
{
    float arrSum;
        arrSum = 0;
        for (int idx = 0; arr[idx] != '\0'; idx++)
        {
            arrSum = arrSum + (float)arr[idx];
        }
        return arrSum;
}
int main() 
{
    char c;
    printf("Enter m/h/l/s: ");
    scanf("%c", &c);
    float arr[16];
    float num;
    int i;
    for (i = 0; i<15; i++)
    {
        printf("Enter a number: ");
        scanf("%f",&num);
        if(num<0)
        {
            break;
        } 
        else 
        {
            arr[i] = num;  
        }
    }
    if(num<0)
    {
        arr[i] = '\0';
    }
    else
    {
        arr[i+1] = '\0';
    }
    float largest, smallest, arrSum;
    switch(c)
    {
        case 'm':
        printf("\nGeometric mean is %f", geometric_mean(arr, i));
        break;
        case 'h':
        printf("\nLargest element is %f", largest(arr));
        break;
        case 'l':
        printf("\nSmallest element is %f", smallest(arr));
        break;
        case 's':
        printf("\nSum is %f" ,arrSum(arr));
        break;
        default:
        printf("\nYou entered incorrect value");
        break;
    }
    return 0;
}