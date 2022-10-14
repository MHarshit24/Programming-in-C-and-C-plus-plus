/*
CH-230-A
a5_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
void divby5(float arr[], int size);
int main()
{
    char a[10];
    int n;
    float *array, input;
    fgets(a, sizeof(a), stdin);
    sscanf(a, "%i", &n);
    //Allocating Memory
    array = (float*)malloc(sizeof(float) * n);
    if(array == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        fgets(a, sizeof(a), stdin);
        sscanf(a, "%f", &input);
        array[i] = input;
    }
    //getting inputs from keyboard
    divby5(array, n);
    for (int j = 0; j < n; j++)
    {
        printf("%f\n", array[j]);
    }
    free(array);
    return 0;
}
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}