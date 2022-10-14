/*
CH-230-A
a7_p3 (use_linked_list.c)
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
int main()
{
    char character;
    int n,m;
    struct list*list_1=NULL;
    while(1)
    {
        scanf("%c",&character);
        if(character=='q')
        {
            dispose_list(list_1);
            break;
        }
        switch (character)
        {
        case 'a':
            scanf("%d",&n);
            list_1=push_back(list_1,n);
            break;

        case 'b':
            scanf("%d",&m);
            list_1=push_front(list_1,m);
            break;

        case 'r':
            list_1=remove_first(list_1);
            break;

        case'p':
            print_list(list_1);
            break;
        }
    }
    return 0;
}