#include <stdio.h>
/*
CH-230-A
a2_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    char c;
    scanf("%c",&c);

    if (48 <= c && c <= 57)
        printf("%c is a digit\n",c);
    else if ((65 <= c && c <= 90)||(97 <= c && c <=122))
        printf("%c is a letter\n",c);
    else
        printf("%c is some other symbol\n",c);

    return 0;

}