/*
CH-230-A
a8_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[500];
    FILE *text1;
    FILE *text2;
    //Reading data from the two files
    text1 = fopen("text1.txt", "r");
    text2 = fopen("text2.txt", "r");
    // test for files not existing.
    if (text1 == NULL || text2 == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    FILE *merge12;
    // write to file
    merge12 = fopen("merge12.txt", "w");
    while (!feof(text1))
    {
        fgets(str, 500, text1);
        fputs(str, merge12);
    }
    fprintf(merge12, "\n");
    while (!feof(text2))
    {
        fgets(str, 500, text2);
        fputs(str, merge12);
    }
    fclose(text1);
    fclose(text2);
    fclose(merge12);
    return 0;
}   