#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ^--- FILE comes from

int main(){

    /*
        take out pen and paper and summarize it to yourself.
        common mistakes
    */

    //input textfile name
    char inp[32];
    printf("Filename: ");
    scanf("%s", inp);
    getc(stdin); //since \n left behind in stream

    //open outputfile
    FILE *out;
    out = fopen(inp, "w");
    if(out == NULL){
        printf("File handling error!");
        exit(0);
    }

    char buff[64]; // a buffer
    printf("Input next three sentences:\n");

    // GOOD
    //outputting 3 lines by fgets
    for(int i = 0; i < 3; i++){
        fgets(buff, 64, stdin);
        fputs(buff, out);
    }

    // ERRRONEOUS
    printf("Input next three sentences:\n");
    //this only stores next three words
    //because of fscanf being weird. I've used fgets everywhere else
    for(int i = 0; i < 3; i++){
        fscanf(stdin, "%s", buff);
        fprintf(out, buff);
    }
    
    // GOOD 
    // ~but leftover from previous error
    fprintf( out, "\n");
    printf("Input next three sentences:\n");
    for(int i = 0; i < 3; i++){
        fgets(buff, 64, stdin);
        fprintf(out, buff);
    }
   
    // ERRONEUOS
    //fwrite writes garbage data since it writes ALL 64 chars
    printf("Input next three sentences:\n");
    //binary functions!
    for(int i = 0; i < 3; i++){
        fgets(buff, 64, stdin);
        fwrite(buff, sizeof(char), 64, out);
    }

    // GOOD
    printf("Input next three sentences:\n");
    //binary functions!
    //strlen from string.h solves the issue
    for(int i = 0; i < 3; i++){
        fgets(buff, 64, stdin);
        fwrite(buff, sizeof(char), strlen(buff), out);
    }

    // ERRONEOUS
    printf("Input next three sentences:\n");
    //binary functions! 
    for(int i = 0; i < 3; i++){
        fread(buff, sizeof(char), 64, stdin); //this is how fread looks, it forces you to take 64 chars T-T
        fwrite(buff, sizeof(char), 64, out);
    }

    fclose(out); //DONT FORGET
    return 0;
}