/*
CH-230-A
a7_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//defining the ascending function
int ascending(const void *A, const void *B)
{
    int *a = (int *)A;
    int *b = (int *)B;
    if (*a < *b)
    {
        return -1;
    } 
    else if (*a == *b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
//defining the descending function
int descending(const void *A, const void *B)
{
    int *a = (int *)A;
    int *b = (int *)B;
    if (*a < *b)
    {
        return 1;
    } 
    else if (*a == *b)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int idx = 0, n;
    //reading the size of the from the keyboard
    scanf("%d", &n);
    int arr[n];
    char c;
    while (idx < n)
    {
        scanf(" %d", &arr[idx]);
        idx++;
    }
    int (*ptr1)(const void*, const void*) = &ascending;
    int (*ptr2)(const void*, const void*) = &descending;
    while (1)
    {
        scanf(" %c", &c);
        if (c == 'a')
        {
            qsort(arr, n, sizeof(int), ptr1);
            for(int i=0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if(c == 'd')
        {
            qsort(arr, n, sizeof(int), ptr2);
            for(int i=0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if(c == 'e')
        {
            exit(0);
        }
        else
        {
            continue;
        }
    }
    return 0;
}