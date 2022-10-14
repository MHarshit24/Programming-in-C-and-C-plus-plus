/*
CH-230-A
a2_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    int num, a = 2, b = 7;
    scanf("%d", &num);
    if (num%a==0 && num%b==0)
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}