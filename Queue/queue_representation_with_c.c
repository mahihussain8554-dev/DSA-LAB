#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int *arr;
   int front;
   int size;
}Queue;

void enqueue(Queue *s , int x)
{
    if(s->front == s->size - 1) {
        printf("Queue is full\n");
        return;
    }
    s->arr[++s->front] = x;
}

void dequeue(Queue *s)
{
    if(s->front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for(int i = 0 ; i < s->front ; i++) {
        s->arr[i] = s->arr[i + 1];
    }
    s->front--;
}

void display(Queue *s)
{
    if(s->front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for(int i = 0 ; i <= s->front ; i++) {
        printf("%d " , s->arr[i]);
    }
    printf("\n");
}
int main()
{
    Queue s;
    scanf("%d" , &s.size);
    s.arr = (int *)malloc(s.size * sizeof(int));
    s.front = -1;
    enqueue(&s , 11); enqueue(&s , 9); enqueue(&s , 10); enqueue(&s , 7);
    printf("After push\n");
    display(&s);
    dequeue(&s);
    printf("After pop\n");
    display(&s);
    enqueue(&s , 56);
    printf("After 2nd enqueue\n");
    display(&s);
    dequeue(&s);
    printf("After 2nd dequeue\n");
    display(&s);
    free(s.arr);
}