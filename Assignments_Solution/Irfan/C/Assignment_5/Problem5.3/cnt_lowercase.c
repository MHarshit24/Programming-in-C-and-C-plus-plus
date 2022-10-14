#include <stdio.h>
#include <ctype.h>

/*
CH-230-A
a5_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
int count_lower(char *str);

int main(){
    //inputs
    char str[50];

    //condition inside while loop
    while(1){
        fgets(str,50,stdin);
        if (str[0] == '\n'){
            printf("Halting Execution!\n");
            break;
        }    
        printf("No. of lower case chars = %d\n\n", count_lower(str));
    }

    return 0;
}

//function defn. ahead
int count_lower(char *str){
    int sum = 0;
    for(char* p = str; *p != '\0'; p++)
        if(isalpha(*p) == 2) //isalpha returns 2 for lowercase characters
            sum++;
    return sum;        
}