/*
CH-230-A
a3_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
void print_form(int n, int m, char c)
{
    int row, column;
    for ( row = 1 ; row <= n ; row++ )
    {
        for( column = 1 ; column <= m ; column++ )
        {
            printf("%c",c);
        }
        printf("\n");
        m++; // this is the missing component!
    }
}
int main()
{
    int n,m;
    char c;
    printf("Enter first interger: ");
    scanf("%d",&n);
    printf("\nEnter second interger: ");
    scanf("%d",&m);
    getchar();
    printf("\nEnter a character: ");
    scanf("%c",&c);
    print_form(n, m, c);
    return 0;
}