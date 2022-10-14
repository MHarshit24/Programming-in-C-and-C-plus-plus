/*
CH-230-A
a7_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//writing function to convert the string in uppercase
void upper_case(char str[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        printf("%c", toupper(str[idx]));
    }
}
//writing function to convert the string in lowercase
void lower_case(char str[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        printf("%c", tolower(str[idx]));
    }
}
//writing function to convert the uppercase alphabets in the string in lowercase and vice-versa
void switch_case(char str[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        if (isupper(str[idx]))
        {
            printf("%c", tolower(str[idx]));
        }
        else
        {
            printf("%c", toupper(str[idx]));
        }
    }
}
void end(char str[], int size)
{
    exit(0);
}
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int size = strlen(str), num = 0;
    //mentioning the defined functions in the main function using pointers
    void (*ptr1)(char*, int) = upper_case;
    void (*ptr2)(char*, int) = lower_case;
    void (*ptr3)(char*, int) = switch_case;
    void (*ptr4)(char*, int) = end;
    void (*ptr_array[4])(char*, int) = {ptr1, ptr2, ptr3, ptr4};
    while (1)
    {
        scanf("%d", &num);
        ptr_array[num - 1](str, size);
    }
    return 0;
}