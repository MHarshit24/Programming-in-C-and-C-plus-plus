#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a8_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //File handling and tests
    FILE *fp1, *fp2, *out;
    fp1 = fopen("text1.txt", "r");
    fp2 = fopen("text2.txt", "r");
    out = fopen("merge12.txt", "w");
    if (fp1 == NULL || fp2 == NULL || out == NULL){
        printf("File handling error!");
        exit(1);
    }


    //creating string of size 30 and extracting line by line
    char s[30];
    while(!feof(fp1)){
        fgets(s, 30, fp1);
        fputs(s, out);
    }
    fprintf(out, "\n"); //to separate the files.
    while(!feof(fp2)){
        fgets(s, 30, fp2);
        fputs(s, out);
    }

    //file close and program end
    fclose(fp1);
    fclose(fp2);
    fclose(out);

    return 0;
}