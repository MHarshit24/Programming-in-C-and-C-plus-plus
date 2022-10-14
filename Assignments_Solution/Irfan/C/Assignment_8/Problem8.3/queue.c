/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq){
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq){
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq){
	return pq->items == 0;
}

int queue_item_count(const Queue *pq){
	return pq->items;
}

int enqueue(Item item, Queue *pq){
    
    //catching errors related to NULL ptrs
    if(pq == NULL){
        printf("Null Queue!\n");
        return -1;
    }

    Node *new;
    new = (Node *) malloc(sizeof(Node));
    if(new == NULL){
        printf("Malloc Failure!\n");
        return -1;
    }

    //node setup
    new->item = item;
    new->next = NULL;
    
    //edge cases
    if(queue_is_empty(pq))
        pq->front = new;
    
    if(pq->items > 0)
        (pq->rear)->next = new;
    
    //enqueuing 
    pq->rear = new;
    pq->items++;

    return 0;
}

int dequeue(Item *pitem, Queue *pq){
	//error capture
    if(pq == NULL){
        printf("Null Queue!\n");
        return -1;
    }
    if(pitem == NULL){
        printf("NULL waiting variable\n");
        return -1;
    }

    //return Item by ref.
    *pitem = (pq->front)->item;

    //Dequeue logic.
    Node *temp = pq->front;
    pq->front = (pq->front)->next;
    free(temp);

    //edge case
    pq->items--;
    if(pq->items == 0){
        pq->front = NULL;
        pq->rear = NULL;
    }

    return 0;
}

int printq(Queue q){

    //p is a temporary Queue variable
    //we can modify front without issue.
    while(q.front != NULL){
        printf("%d ", (q.front)->item);
        q.front = (q.front)->next;
    }
    printf("\n");

    return 0;
}

void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}