#ifndef LIST
#define LIST
struct list{
    int a;
    struct list *next;
};

// function to add node at end
struct list* add(struct list *top);

//function to add node at beginning, returns new head.
struct list* begg(struct list *top);

//function remove node at beginning, returns new head.
struct list* rem(struct list *top);

//function to print list
void printL(struct list *top);

//function to delete rest of list starting from top.
void freeL(struct list *top);
#endif