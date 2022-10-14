/*
CH-230-A
a2_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
int main() {
    int a, b, c, week, day, hour;
    printf("\nEnter the number of weeks: ");
    scanf("%d", &a);
    printf("\nEnter the number of days: ");
    scanf("%d", &b);
    printf("\nEnter the number of hours: ");
    scanf("%d", &c);
    week = 168 * a;
    day = 24 * b;
    hour = week + day + c;
    printf("\nTotal Number of Hours: %d", hour);
    return 0; 
}