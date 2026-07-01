#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack is full\n";
            return;
        }
        arr[++top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top--];
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int n; cin >> n;
    Stack s(n);
    s.push(11); s.push(10); s.push(9); s.push(7);
    cout << "After push\n";
    s.display();
    s.pop();
    cout << "After pop\n";
    s.display();
}