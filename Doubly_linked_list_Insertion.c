// Doubly Linked List - Insertion Operations
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} NODE;

NODE *head = NULL;
int size = 0;

// Create new node
NODE *create()
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    temp->prev = NULL;
    temp->next = NULL;
    size++;
    return temp;
}

// Insert at beginning
void insertAtBegin(int n)
{
    NODE *temp = create();
    temp->data = n;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at end
void insertAtEnd(int n)
{
    NODE *temp = create();
    NODE *t;
    temp->data = n;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
        temp->prev = t;
    }
}

// Insert at any position
void insertAtAnywhere(int n)
{
    int p, i;
    NODE *temp, *t;

    printf("Enter position: ");
    scanf("%d", &p);

    if(p <= 0 || p > size + 1)
    {
        printf("Invalid position\n");
        return;
    }

    if(p == 1)
    {
        insertAtBegin(n);
        return;
    }

    if(p == size + 1)
    {
        insertAtEnd(n);
        return;
    }

    temp = create();
    temp->data = n;

    t = head;

    for(i = 1; i < p - 1; i++)
    {
        t = t->next;
    }

    temp->next = t->next;
    temp->prev = t;
    t->next->prev = temp;
    t->next = temp;
}

// Display list
void traverse()
{
    NODE *t = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while(t != NULL)
    {
        printf("%d <-> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

// Main function
int main()
{
    int ch, n;

    while(1)
    {
        printf("\n1.Insert at beginning\n");
        printf("2.Insert at end\n");
        printf("3.Insert at position\n");
        printf("4.Display\n");
        printf("5.Size\n");
        printf("6.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &n);
                insertAtBegin(n);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &n);
                insertAtEnd(n);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &n);
                insertAtAnywhere(n);
                break;

            case 4:
                traverse();
                break;

            case 5:
                printf("Size = %d\n", size);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}