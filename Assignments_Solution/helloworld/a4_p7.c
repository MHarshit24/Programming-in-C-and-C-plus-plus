/*
CH-230-A
a4_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int row, column, n;
    scanf("%d", &n);
    if (n<=30)
    {
        int table[n][n];
        /*Counter variables for the loop*/
        for(row=0; row<n; row++) 
        {
            for(column=0;column<n;column++) 
            {
                scanf("%d", &table[row][column]);
            }
        }
        //Displaying array elements
        printf("The entered matrix is:\n");
        for (row = 0; row < n ; row++)
        {
            for (column = 0; column < n ; column++)
            printf ("%d ", table [row][column]);
            printf ("\n");
        }
        // printf("Under the main diagonal:\n", lower(table, n));
    }
    else
    {
    } 
   return 0;
}