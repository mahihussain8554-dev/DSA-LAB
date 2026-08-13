#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}



void insertBgn( struct Node **head, int value )
{
    struct Node *newNode = createNode(value);

    newNode->next = *head;
    *head = newNode;
}


void insertEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}


void deleteBegin(struct Node **head)
{
    if(*head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;

    free(temp);
}


void deleteEnd(struct Node **head)
{
    if(*head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *temp = *head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}


int search(struct Node *head, int key)
{
    while(head != NULL)
    {
        if(head->data == key)
            return 1;

        head = head->next;
    }

    return 0;
}


int countNodes(struct Node *head)
{
    int count = 0;

    while(head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}


void display(struct Node *head)
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}


void destroy(struct Node **head)
{
    struct Node *temp;

    while(*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main()
{
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    insertBgn(&head, 5);

    display(head);

    deleteBegin(&head);
    display(head);

    deleteEnd(&head);
    display(head);

    printf("Total Nodes = %d\n", countNodes(head));

    if(search(head, 20))
        printf("20 Found\n");
    else
        printf("20 Not Found\n");

    destroy(&head);

    return 0;
}