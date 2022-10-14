/*
CH-230-A
a6_p9.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int item;
    struct Node* next;
};
void insertAtBeginning(struct Node** reference,int data)
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->item=data;
    node->next=*reference;
    *reference=node;
    return;
}
void insertAtEnd(struct Node** reference,int data)
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    struct Node* last=*reference;
    node->item=data;
    node->next=NULL;
    if(*reference==NULL)
    {
        *reference=node;
        return;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=node;
    return;
}
void insertAtPosition(struct Node** reference, int pos, int data)
{
    struct Node* last=*reference;
    int length=0;
    while(last)
    {
        length++;
        last=last->next;
    }
    if(pos<0||pos>length)
    {
        printf("Invalid position\n");
        return;
    }
    else
    {
        struct Node* node=(struct Node*)malloc(sizeof(struct Node));
        node->item=data;

        if(pos==0)
        {
            node->next=*reference;
            *reference=node;
            return;
        }
        else
        {
            last=*reference;
            while(--pos)
            {
                last=last->next;
            }
            node->next=last->next;
            last->next=node;
            return;
        }
    }
}
void reverseList(struct Node** reference)
{
    struct Node* cur=*reference;
    struct Node* prev=NULL;
    struct Node* next_node=NULL;
    while(cur)
    {
        next_node=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next_node;
    }
    *reference=prev;
    return;
}
struct Node* deleteNode(struct Node** reference)
{
    struct Node* temperature=*reference;
    struct Node* temperature2=temperature->next;
    temperature->next=NULL;
    free(temperature);
    return temperature2;
}
void printList(struct Node* node)
{
    while(node!=NULL)
    {
        printf("%d ",node->item);
        node=node->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head=NULL;
    int value=0;
    int flag=1;
    int position;
    char option;
    while(flag)
    {
        scanf("%c",&option);
        switch(option)
        {
            case 'a':
                scanf("%d",&value);
                insertAtEnd(&head,value);
                break;
            case 'b':
                scanf("%d",&value);
                insertAtBeginning(&head,value);
                break;
            case 'i':
                scanf("%d%d",&position,&value);
                insertAtPosition(&head,position,value);
                break;
            case 'p':
                printList(head);
                break;
            case 'q':
                flag=0;
                break;
            case 'r':
                head=deleteNode(&head);
                break;
            case 'R':
                reverseList(&head);
            break;   
        }    
    }
    return 0;
}