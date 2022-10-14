/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// added missing stuff
    if (pq == NULL)
    {
        return -1;
    }
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    NEW -> item = item;
    NEW -> next = NULL;
    if (pq -> front == NULL)
    {
        pq -> front = NEW;
    }
    if(pq -> rear != NULL)
    {
        (pq -> rear) -> next = NEW;
    }
    pq -> rear = NEW;
    pq -> items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff    
    if (pitem == NULL || pq == NULL)
    {
        return -1;
    }
    *pitem = (pq -> front) -> item;
    if (pq -> rear == NULL)
    {
        pq -> front = NULL;
        pq -> rear = NULL;
    }
    Node *temp = pq -> front;
    (pq -> front) = pq -> front -> next;
    free(temp);
    pq -> items--;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(int num, Item *pitem, Queue *pq)
{
	printf("content of the queue: ");
	//defining a variable
	Node *temp = pq -> front;

    //printing the elements
	for (int i = 0; i < num; i++)
	{
		printf("%i ", temp -> item);
		temp = temp -> next;
	}
	printf("\n");
}