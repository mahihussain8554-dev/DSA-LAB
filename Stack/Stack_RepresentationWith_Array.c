#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int *arr;
   int top;
   int size;
}Stack;

void push(Stack *s , int x)
{
    if(s->top == s->size - 1) {
        printf("Stack is full\n");
        return;
    }
    s->arr[++s->top] = x;
}

void pop(Stack *s)
{
    if(s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    s->top--;
}

void display(Stack *s)
{
    if(s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for(int i = 0 ; i <= s->top ; i++) {
        printf("%d " , s->arr[i]);
    }
    printf("\n");
}
int main()
{
    Stack s;
    scanf("%d" , &s.size);
    s.arr = (int *)malloc(s.size * sizeof(int));
    s.top = -1;
    push(&s , 11); push(&s , 10); push(&s , 9); push(&s , 7);
    printf("After push\n");
    display(&s);
    pop(&s);
    printf("After pop\n");
    display(&s);
    free(s.arr);
}