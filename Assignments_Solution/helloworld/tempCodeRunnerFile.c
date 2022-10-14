#include <stdio.h>
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}
int main()
{
    float arr[6];
    arr[1]=5.500;
    arr[2]=6.500;
    arr[3]=7.750;
    arr[4]=8.000;
    arr[5]=9.600;
    arr[6]=10.360;
    int n = 6;
    printf("Before:\n");
    for(int i = 1; i <= 6; i++)
    {
        printf("%.3f ", arr[i]);
    }
    divby5(arr, n);
    printf("\nAfter:\n");
    for (int idx = 0; idx < n; idx++)
    {
        printf("%.3f ", ((arr[idx])/5));
        // .3f s used to get the the answer in 3 decimal places
    }
    printf("\n");
    return 0;
}