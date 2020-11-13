#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x){
    if(q->rear==q->size-1){
        printf("queue is full\n");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear){
        printf("queue is empty\n");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q ){
    while(q.front!=q.rear){
        printf("%d ",q.Q[q.front]);
        q.front++;
    }
}
int main() {
    struct queue q;
    create(&q,7);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,10);
    printf("%d ",dequeue(&q));
    printf("%d \n",dequeue(&q));
    display(q);
}
