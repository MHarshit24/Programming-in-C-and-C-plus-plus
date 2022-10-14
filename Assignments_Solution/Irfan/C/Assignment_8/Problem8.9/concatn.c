#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a8_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    
    //input number of files
    int n;
    printf("(Please include .txt in filenames)\n");
    printf("Number of files = ");
    scanf("%d", &n);

    //setup temp file pointer and open output.txt
    FILE *temp, *out;
    out = fopen("output.txt", "w");
    if(out == NULL){
        printf("File handling failure");
        exit(1);
    }

    //read file names and concat at same time
    char s[30], buffer[64];
    int successCount = 0;
    for(int i = 0; i < n; i++){
        printf("File %d = ", i+1);
        scanf("%s", s);
        temp = fopen(s, "r");
        if(temp == NULL){
            printf("File handling failure");
            exit(1);
        }

        //binary concat logic
        while(!feof(temp)){
            successCount = fread(buffer, sizeof(char), 64, temp);
            fwrite(buffer, sizeof(char), successCount, out);
        }
        fwrite("\n", sizeof(char), 1, out);
        fclose(temp);
    }

    fclose(out); 

    return 0;
}