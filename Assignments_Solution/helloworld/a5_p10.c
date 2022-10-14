/*
CH-230-A
a5_p10.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
void print(int n)
{
    if (n == 1)
    {
        printf("%i\n", n);
    }
    else
    {
        printf("%i, ", n); 
        print(n - 1);        
    }
}
int main()
{
    // Defining variables
    int n;
    printf("Enter number: ");
    scanf("%d", &n); 
    print(n);
    return 0;
}