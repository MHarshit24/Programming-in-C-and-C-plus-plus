#include <stdio.h>
#include <string.h>

/*
CH-230-A
a4_p12
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//no return since strings passed by ref
void replaceAll(char *str, char c, char e);

int main(){

    //setting up variables.
    char str[80], c, e;

    //condition inside while.
    while(1){
        printf("Input string = ");
        fgets(str, sizeof(str), stdin);
        if (strcmp(str,"stop\n") == 0){
            printf("\nstopping!..");
            break;
        }

        printf("c = ");
        scanf("\n%c", &c);

        printf("e = ");
        scanf("\n%c", &e);

        //to clear input buffer
        getchar();

        //output
        replaceAll(str,c,e);
        printf("\nModified String = %s\n\n", str);

    }

    return 0;

}

void replaceAll(char *str, char c, char e){

    for(char *p = str; *p != '\0'; p++)
        if(*p == c)
            *p = e;

    return;
}
