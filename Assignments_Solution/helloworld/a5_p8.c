/*
CH-230-A
a5_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
//getting matrix from user
void get_matrix(int **a, int **b, int **c, int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%i", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%i", &b[i][j]);
        }
    }
}
//printing matrix
void matrix(int **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
}
//multiplying matrices
void multiplying_matrix(int **a, int **b, int **c, int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][k] += (a[i][j] * b[j][k]);
            }
        }
    }
}
//function to free matrix memory
void free_matrix(int **a)
{
    free(*a);
    free(a);
}
int main()
{
    int n, m, p;
    scanf("%i", &n);
    scanf("%i", &m);
    scanf("%i", &p);
    int **a = (int**)malloc(sizeof(int)*n);
    int **b = (int**)malloc(sizeof(int)*m);
    int **c = (int**)malloc(sizeof(int)*n);
    for (int i = 0; i < m; i++)
    {
        a[i] = (int*)malloc(sizeof(int)*n);
    }
    for (int i = 0; i < p; i++)
    {
        b[i] = (int*)malloc(sizeof(int)*n);
    }
    for (int i = 0; i < p; i++)
    {
        c[i] = (int*)malloc(sizeof(int)*n);
    }
    get_matrix(a, b, c, n, m, p);
    matrix(a, n, m);
    matrix(b, m, p);
    multiplying_matrix(a, b, c, n, m, p);
    matrix(c, n, p);
    free_matrix(a);
    free_matrix(b);
    free_matrix(c);
    return 0;
}