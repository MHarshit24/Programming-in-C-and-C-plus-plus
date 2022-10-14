/*
CH-230-A
a8_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    double a, b;
    FILE *fp1;
    FILE *fp2;
    //Reading data from the two files
    fp1 = fopen("input1.txt", "r");
    fscanf(fp1, "%lf", &a);
    fp2 = fopen("input2.txt","r");
    fscanf(fp2,"%lf",&b);
    // test for files not existing.
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    FILE *result;
    result = fopen("result.txt", "w");
    // write to file
    fprintf(result,"%lf\n",a+b);
    fprintf(result,"%lf\n",a-b);
    fprintf(result,"%lf\n",a*b);
    fprintf(result,"%lf\n",a/b);
    fclose(fp1);
    fclose(fp2);
    fclose(result);
    return 0;
}