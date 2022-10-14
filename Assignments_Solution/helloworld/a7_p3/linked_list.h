/*
CH-230-A
a7_p3 (linked_list.h)
Harshit Mutha
h.mutha@jacobs-university.de
*/
struct list
{
    int info;
    struct list*next;
};
struct list*push_front(struct list*list_1,int value);
struct list*push_back(struct list*list_1,int value);
void dispose_list(struct list*list_1);
void print_list(struct list*list_1);
struct list*remove_first(struct list*list_1);