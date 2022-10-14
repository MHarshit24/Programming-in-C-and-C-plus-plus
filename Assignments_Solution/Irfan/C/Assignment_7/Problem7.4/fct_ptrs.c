#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define maxLen (100)

/* 
CH-230-A
a7_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

void printUpper(char *str);

void printLower(char *str);

void printFlip(char *str);

void exiter(char *str);

int main(){

    char str[maxLen], inp;
    fgets(str, maxLen, stdin);

    void (*funcs[4])(char *str) = {printUpper, printLower, printFlip, exiter};

    while(1){
        scanf("%c", &inp); 
        getchar();
        funcs[(int)(inp - '1')](str); //way to convert input to index
    }

}

//str updated AFTER passing as argument to toupper.
void printUpper(char *str){
    while(*str != '\0')
        if(isalpha(*str))
            printf("%c", toupper(*(str++)));
        else
            printf("%c", *(str++));
    return;
}

//str updated AFTER passing as argument to tolower
void printLower(char *str){
    while(*str != '\0')
        if(isalpha(*str))
            printf("%c", tolower(*(str++)));
        else
            printf("%c", *(str++));
    return;
}

//str updated after passing as argument
void printFlip(char *str){
    while(*str != '\0')
        if(islower(*str))
            printf("%c", toupper(*(str++)));
        else if(isupper(*str))
            printf("%c", tolower(*(str++)));
        else
            printf("%c", *(str++));
    return;            
}

//takes argument to simplify code.
void exiter(char *str){
    exit(0);
}