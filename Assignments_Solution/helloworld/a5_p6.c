/*
CH-230-A
a5_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
//finds numbers before first negative number
void negativePos(float *arr, int size, int *before)
{ 
    float *firstPos = arr;
    for(int i = 0; i < size; i++)
    { 
        if (*arr < 0)
        { 
            *before = arr - firstPos;
            break; 
        }
        arr++;
    }
}
int main()
{
    int size, before = 0;
    char input[150];
    float *arr;
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &size);
    //Allocating memory
    arr = (float*)malloc(sizeof(float) * size);
    if (arr == NULL)
    { 
        exit(1);
    }
    //getting input from keyboard
    for (int i = 0; i < size; i++) { 
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%f", &arr[i]);
    }
    negativePos(arr, size, &before);
    printf("Before the first negative value: %i elements\n", before);
    free (arr);
    return 0;
}