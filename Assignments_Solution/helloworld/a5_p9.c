/*
CH-230-A
a5_p9.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
//getting matrix from user
void get_3D_array(int ***a, int x, int y, int z)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                scanf("%i", &a[i][j][k]);
            }
        }
    }
}
//prints xy sections
void xy_sections(int ***a, int x, int y, int z)
{
    for (int i = 0; i < z; i++)
    {
        printf("Section %i:\n", i + 1);
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                printf("%i ", a[j][k][i]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int x, y, z;
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    // Allocating memory
    int ***a = (int***)malloc(sizeof(int)*z);
    for (int i = 0; i < z; i++)
    {
        a[i] = (int**)malloc(sizeof(int)*x);
        for (int j = 0; j < x; j++)
        {
            a[i][j] = (int*)malloc(sizeof(int)*y);
        }
    }
    get_3D_array(a, x, y, z);
    xy_sections(a, x, y, z);
    // Freeing memory
    free(a);
    return 0;
}