/*
CH-230-A
a6_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
//Macros to calculate minimum and maximum between 3 numbers
#define min_between_x_and_y(a,b) ((a)<(b)?(a):(b))
#define min(a,b,c) min_between_x_and_y(min_between_x_and_y(a,b),c)
#define max_between_x_and_y(a,b) ((a)>(b)?(a):(b))
#define max(a,b,c) max_between_x_and_y(max_between_x_and_y(a,b),c)
int main()
{
    //Defining variables
    int a, b, c;
    float mid_range;
    //Reading the three integers from the keyboard
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    mid_range = (min(a,b,c) + max(a,b,c)) / 2.0;
    printf("The mid-range is: %f\n", mid_range);
    return 0;
}