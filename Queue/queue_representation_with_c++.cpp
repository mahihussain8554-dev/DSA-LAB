#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int size;

public:
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
    }

    void enqueue(int x)
    {
        if (front == size - 1)
        {
            cout << "Queue is full\n";
            return;
        }

        arr[++front] = x;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = 0; i < front; i++)
        {
            arr[i] = arr[i + 1];
        }

        front--;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = 0; i <= front; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    int n; cin >> n;
    Queue q(n);
    q.enqueue(11); q.enqueue(9); q.enqueue(10); q.enqueue(7);
    cout << "After enqueue\n";
    q.display();
    q.dequeue();
    cout << "After dequeue\n";
    q.display();
    q.enqueue(56);
    cout << "After 2nd enqueue\n";
    q.display();
    q.dequeue();
    cout << "After 2nd dequeue\n";
    q.display();
}