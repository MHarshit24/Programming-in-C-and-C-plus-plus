#include <stdio.h>
#include <string.h>

/*
CH-230-A
a3_p11
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    char str1[100] ,str2[100], str3[100];
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("length1=%d\n",len1);
    printf("length2=%d\n",len2);

    //use str3 as temp string to hold concatenated strings.
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("concatenation=%s\n",str3);

    //reuse str3 as copy of str2
    strcpy(str3,str2);
    printf("copy=%s\n",str3);

    int cmp = strcmp(str1,str2);
    if (cmp > 0) 
        printf("one is larger than two\n");
    else if (cmp < 0)
        printf("one is smaller than two\n");
    else
        printf("one is equal to two\n");

    //char search.  
    char read;
    scanf("\n%c",&read);

    if (!strchr(str2,read))
        printf("The character is not in the string\n");
    else
        printf("position=%d\n", (int)(strchr(str2,read)-str2));
        //char pointers move by 1 so no need to divide when printing position
    return 0;    
}
