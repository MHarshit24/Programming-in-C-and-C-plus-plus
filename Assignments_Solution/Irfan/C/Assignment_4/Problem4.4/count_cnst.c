#include <stdio.h>

/*
CH-230-A
a4.4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function to count consonants
int count_consonants(char S[]);
//function to check if vowel
int ifVow(char a);
//function to check if alphabet
int ifAlph(char a);

int main(){

    char S[100];

    //while loop with condition inside for better pretty printing.
    while (1) {
        fgets(S,sizeof(S),stdin);
        if (S[0] == '\n')
            break;
        printf("Number of consonants=%d\n", count_consonants(S));
    }

    return 0;
}

//function definitions below

int count_consonants(char S[]){
    int cnt = 0;
    for (char *p = S; *p != '\n'; p++)
        if (!ifVow(*p) && ifAlph(*p))
            cnt++;
    return cnt;        
}

int ifVow(char a){
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        return 1;
    else
        return 0;
}

int ifAlph(char a){
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) )
        return 1;
    else 
        return 0;    
}