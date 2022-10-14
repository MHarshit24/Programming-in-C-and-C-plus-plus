/*
CH-230-A
a5_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // Defining variables
    char x[105], y[105];
    fgets(x, sizeof(x), stdin);
    fgets(y, sizeof(y), stdin);
    //removing extra lines
    x[strlen(x) - 1] = '\0';
    y[strlen(y) - 1] = '\0';
    char *x_and_y;
    // Allocating memory
    x_and_y = (char*)malloc(sizeof(char)*(strlen(x) + strlen(y)));
    if(x_and_y == NULL)
    {
        exit(1);
    }
    strcat(x_and_y, x);
    strcat(x_and_y, y);
    printf("Result of concatenation: %s\n", x_and_y);
    free(x_and_y);
    return 0;
}