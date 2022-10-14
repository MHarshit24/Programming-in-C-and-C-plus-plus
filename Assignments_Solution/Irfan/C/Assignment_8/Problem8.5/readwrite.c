#include <stdio.h>
#include <stdlib.h>

/* 
CH-230-A
a8_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/  

int main(){
    
    //file open and checks
    FILE *inp, *out;
    inp = fopen( "chars.txt","r");
    out = fopen( "codesum.txt","w");
    if (inp == NULL || out == NULL){
        printf("File failure!");
        exit(1);
    }
    
    //file output and creation.
    fprintf(out, "%d", fgetc(inp) + fgetc(inp));


    //file close and program end
    fclose(inp);
    fclose(out);
    return 0;
}