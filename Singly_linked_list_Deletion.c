// Singly Linked List - Deletion Operations
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *head = NULL;

// Function to count size
int size()
{
    NODE *temp = head;
    int l = 0;

    while(temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

// Delete at beginning
void deleteAtBegin()
{
    NODE *temp;

    if(head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    printf("%d is removed\n", head->data);
    temp = head;
    head = head->next;
    free(temp);
}

// Delete at end
void deleteAtEnd()
{
    NODE *temp, *prev;

    if(head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    // Only one node
    if(head->next == NULL)
    {
        printf("%d is removed\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("%d is removed\n", temp->data);
    prev->next = NULL;
    free(temp);
}

// Delete at any position
void deleteAtAnywhere()
{
    NODE *temp, *prev;
    int p, i;

    printf("Enter the position: ");
    scanf("%d", &p);

    if(head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    if(p == 1)
    {
        deleteAtBegin();
        return;
    }

    if(p == size())
    {
        deleteAtEnd();
        return;
    }

    if(p > size() || p <= 0)
    {
        printf("No such position\n");
        return;
    }

    temp = head;

    for(i = 1; i < p; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("%d is removed\n", temp->data);
    prev->next = temp->next;
    free(temp);
}

// Display list (extra helpful)
void display()
{
    NODE *temp = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at end (for testing)
void insert(int n)
{
    NODE *temp, *newnode;

    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = n;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// Main function
int main()
{
    int ch, n;

    while(1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete at beginning\n");
        printf("3.Delete at end\n");
        printf("4.Delete at position\n");
        printf("5.Display\n");
        printf("6.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &n);
                insert(n);
                break;

            case 2:
                deleteAtBegin();
                break;

            case 3:
                deleteAtEnd();
                break;

            case 4:
                deleteAtAnywhere();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}