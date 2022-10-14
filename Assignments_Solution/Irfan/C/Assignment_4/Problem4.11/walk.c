#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
CH-230-A
a4_p11
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
int count_insensitive(char *str, char c);


int main(){
    
    //allocating inputs and obtaining them.
    char *sacrifice, *chosen_one;

    sacrifice = (char *) malloc(50*sizeof(char));
    if (sacrifice == NULL){
        printf("\nMalloc failure");
        exit(1);
    }

    printf("Input String(Less than 50 characters) = ");
    fgets(sacrifice, 50, stdin);

    printf("\n\nstrlen = %d", strlen(sacrifice));
    

    //Allocating correct memory and freeing the sacrifice.
    //fgets comes with '\n\0' at end. -1 of size gets rid of the \n
    chosen_one = (char *) malloc((strlen(sacrifice)-1)*sizeof(char));
    if (chosen_one == NULL){
        printf("\nMalloc failure");
        exit(1);
    }
    strcpy(chosen_one, sacrifice);
    free(sacrifice);

    //grabbing search char c
    char c;
    printf("Search character = ");
    scanf("\n%c",&c);

    printf("Number of %c's = %d\n",c,count_insensitive(chosen_one,c));
    free(chosen_one);
    
    return 0;
}


int count_insensitive(char* str, char c){
    int count = 0;
    for (char *p = str; *p != '\0'; p++)
        if (tolower(c) == tolower(*p)) //make both lowercase to check.
            count++;

    return count;        
}

