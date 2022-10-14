/*
CH-230-A
a6_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
struct list
{
    int info;
    struct list*next;
};
#include<stdio.h>
#include<stdlib.h>
struct list*push_front(struct list*list_1,int value);
struct list*push_back(struct list*list_1,int value);
void dispose_list(struct list*list_1);
void print_list(struct list*list_1);
struct list*remove_first(struct list*list_1);
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
    struct list*push_front(struct list*list_1,int value)
    {
        struct list*new_line;
        new_line=(struct list*)malloc(sizeof(struct list));
        if (new_line==NULL)
        {
            printf(" Error allocating memory \n");
            return list_1;
        }
        new_line -> info = value;
        new_line -> next = list_1;
        return new_line;
        }
        struct list*push_back(struct list*list_1,int value)
        {
            struct list*cursor,*new_line;
            cursor=list_1;
            new_line=(struct list*)malloc(sizeof(struct list));
            if (new_line==NULL)
            {
                printf(" Error allocating memory \n");
                return list_1;
            }
            new_line -> info = value;
            new_line -> next = NULL;
            if(list_1==NULL)
            return new_line;
            while(cursor -> next !=NULL)
            cursor=cursor -> next;
            cursor -> next=new_line;
            return list_1;
        }
        void dispose_list(struct list*list_1)
        {
            struct list*nextelem;
            while(list_1 != NULL)
        {
            nextelem = list_1 -> next;
            free(list_1);
            list_1 = nextelem;
        }
    }
    void print_list(struct list*list_1)
    {
        struct list*p;
        for(p=list_1;p;p=p -> next)
        {
            printf("%d ",p -> info);
        }
        printf("\n");
    }
    struct list*remove_first(struct list*list_1)
    {
        struct list*p;
        if(list_1==NULL)
            return(list_1);
        else
        {
            p=list_1;
            list_1=list_1 -> next;
            free(p);
            return(list_1);
        }
    }