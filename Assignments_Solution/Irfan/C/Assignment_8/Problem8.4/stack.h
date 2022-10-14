#ifndef STACK
#define STACK

    #define MAX 12

    struct stack{
        unsigned int count;
        int array[MAX]; //container
    };

    //returns nothing, modifies s by reference
    void push(struct stack *s, int n);

    //returns popped element, modifies s by reference
    int pop(struct stack *s);

    //empties the stack.
    void empty(struct stack *s);

    //returns 1 if empty 0 if not. *ptr stack for consistency/readability
    int isEmpty(struct stack *s);

#endif