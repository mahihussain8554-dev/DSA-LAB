/* MARUF
     HUSSAIN
          MAHI */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define all(v) v.begin(),v.end()
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
typedef struct
{
    int *arr;
    int front;
    int rear;
    int size;
}CircularQueue;

void enqueue(CircularQueue *q, int x)
{
    if((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue Overflow\n";
        return;
    }
    if(q->front == -1)
    {
        q->front = q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
    }
    q->arr[q->rear] = x;
}

void dequeue(CircularQueue *q)
{
    if(q->front == -1)
    {
        cout << "Queue Underflow\n";
        return;
    }
    if(q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
    }
}

void display(CircularQueue *q)
{
    if(q->front == -1)
    {
        cout << "Queue is Empty\n";
        return;
    }
    ll i = q->front;
    while(true)
    {
        cout << q->arr[i] << " ";
        if(i == q->rear)
            break;
        i = (i + 1) % q->size;
    }
    cout << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);
    CircularQueue s;
    cin >> s.size;
    s.arr = new int[s.size];
    s.front = -1; s.rear = -1;
    enqueue(&s , 11); enqueue(&s , 9); enqueue(&s , 10); enqueue(&s , 7);
    cout << "After enqueue\n";
    display(&s);
    dequeue(&s); dequeue(&s); dequeue(&s);
    enqueue(&s , 1); enqueue(&s , 2); enqueue(&s , 3);
    cout << "After dequeue\n";
    display(&s);
    enqueue(&s , 56);
    cout << "After 2nd enqueue\n";
    display(&s);
    dequeue(&s);
    cout << "After 2nd dequeue\n";
    display(&s);
    delete[] s.arr;  
    return 0;
}