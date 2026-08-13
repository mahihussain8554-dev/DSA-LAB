#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(int value)
{
    if (size == MAX)
    {
        printf("Heap is full!\n");
        return;
    }

    heap[size] = value;
    int i = size;
    size++;

    while (i > 0)
    {
        int parent = (i - 1) / 2;

        if (heap[parent] <= heap[i])
            break;

        swap(&heap[parent], &heap[i]);
        i = parent;
    }
}

int deleteMin()
{
    if (size == 0)
    {
        printf("Heap is empty!\n");
        return -1;
    }

    int min = heap[0];

    heap[0] = heap[size - 1];
    size--;

    int i = 0;

    while (1)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest == i)
            break;

        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }

    return min;
}

void display()
{
    printf("Min Heap: ");

    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int main()
{
    insert(30);
    insert(10);
    insert(20);
    insert(5);
    insert(40);
    insert(15);

    display();

    printf("Minimum element: %d\n", deleteMin());

    display();

    printf("Minimum element: %d\n", deleteMin());

    display();

    return 0;
}