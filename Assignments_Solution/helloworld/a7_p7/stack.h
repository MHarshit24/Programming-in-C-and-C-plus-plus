/*
CH-230-A
a7_p7 (stack.h)
Abhigyan Deep Barnwal
abarnwal@jacobs-university.de
*/

struct stack
{
    unsigned int count;
    int array[12];
};

void push(struct stack *s, int value);
void pop(struct stack *s);
void empty(struct stack *s);