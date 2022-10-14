/*
CH-230-A
a5_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
//calculates and returns scalar product
double scalar_product(double arr1[], double arr2[], int n)
{
    double scalar_product = 0;
    for (int i = 0; i < n; i++)
    {
        scalar_product += arr1[i] * arr2[i];
    }
    return scalar_product;
}
//finds and prints lowest number and its position in an array
void lowest_and_position(double arr[], int n)
{
    double lowest_number = arr[0];
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (lowest_number > arr[i])
        {
            lowest_number = arr[i];
            position = i;
        }
    }
    printf("The smallest = %lf\n", lowest_number);
    printf("Position of smallest = %i\n", position);
}
//finds and prints highest number and its position in an array
void highest_and_position(double arr[], int n)
{
    double highest_number = 0;
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (highest_number < arr[i])
        {
            highest_number = arr[i];
            position = i;
        }
    }
    printf("The largest = %lf\n", highest_number);
    printf("Position of largest = %i\n", position);
}
int main()
{
    char arr[100];
    int n;
    double input, v[100], w[100];
    fgets(arr, sizeof(arr), stdin);
    sscanf(arr, "%i", &n);
    for (int i = 0; i < n; i++)
    {
        fgets(arr, sizeof(arr), stdin);
        sscanf(arr, "%lf", &input);
        v[i] = input;
    }
    for (int j = 0; j < n; j++)
    {
        fgets(arr, sizeof(arr), stdin);
        sscanf(arr, "%lf", &input);
        w[j] = input;
    }
    double sp = scalar_product(v, w, n);
    printf("Scalar product=%lf\n", sp);
    lowest_and_position(v, n);
    highest_and_position(v, n);
    lowest_and_position(w, n);
    highest_and_position(w, n);
    return 0;
}
