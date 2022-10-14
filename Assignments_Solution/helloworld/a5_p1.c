/*
CH-230-A
a5_p1.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n, row, column;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    for (row=n; row>=1; row--)
    {
        for( column = row ; column >= 1 ; column-- )
        {
            printf("%c",ch);
            // print pattern
        }
        printf("\n");
        // move to next line
    }
    return 0;
}