/*
CH-230-A
a8_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[500], ch;
    int word_count = 0;
    fgets(str, sizeof(str), stdin);
    str[strlen(str)- 1] = '\0';
    //Reading data from the file
    FILE *words;
    words = fopen("words.txt", "r");
    // test for files not existing.
    if (words == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    int empty_char = 1;
    while ((ch = fgetc(words)) != EOF)
    {
        int last_char = empty_char;
        //function so the following characters are not counted
        if (ch == '\n' || ch == ' ' || ch == ',' || ch == '?' || ch == '!' || 
        ch == '.' || ch == '\t' || ch == '\r')
        {
            empty_char = 1;
        }
        else
        {
            empty_char = 0;
        }
        if (empty_char == 0  && last_char == 1)
        {
            word_count++;
        }
    }
    printf("The file contains %i words.\n", word_count);
    fclose(words);
    return 0;
}