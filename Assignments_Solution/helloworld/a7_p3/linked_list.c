/*
CH-230-A
a7_p3 (linked_list.c)
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
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