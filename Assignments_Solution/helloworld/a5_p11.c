/*
CH-230-A
a5_p11.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
//checking for prime number
int Prime(int number, int divisor)
{
    if (number == 1)
    {
        return 0;
    }
    if (number <= 2)
    {
        return 1;
    }
    if (number % divisor == 0)
    {
        return 0;
    }
    if (divisor * divisor > number)
    {
        return 1;
    }
    return Prime(number, divisor + 1);
}
int main()
{
    // Defining variables
    int num;
    scanf("%i", &num);
    if (Prime(num, 2) == 1)
    {
        printf("%i is prime\n", num);
    }
    else
    {
        printf("%i is not prime\n", num);
    }
    return 0;
}