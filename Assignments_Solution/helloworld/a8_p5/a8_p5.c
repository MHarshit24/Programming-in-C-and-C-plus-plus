/*
CH-230-A
a8_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char ch, ch1;
    FILE *inp;
    //Reading data from the file
    inp = fopen("chars.txt", "r");
    fscanf(inp, "%c %c", &ch, &ch1);
    // test for files not existing.
    if (inp == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    FILE *codesum;
    // write to file
    codesum = fopen("codesum.txt", "w");
    fprintf(codesum,"%d\n",ch+ch1);
    fclose(codesum);
    fclose(inp);
    return 0;
}