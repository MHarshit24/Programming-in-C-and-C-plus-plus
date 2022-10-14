#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 
CH-230-A
a8_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    
    //filename input
    char s[30];
    printf("(files with .txt please!)\n");
    printf("File = ");
    scanf("%s", s);

    //file handling and tests
    FILE *inp;
    inp = fopen(s, "r");

    //flag tracks when you enter a word
    int flag = 0, count = 0;
    while(!feof(inp)){
        if(isalpha(fgetc(inp))){
            if(flag == 0){
                flag = 1;
                count++;
            }
        }
        else
            flag = 0;
    }
    printf("Count = %d", count);
    return 0;
}