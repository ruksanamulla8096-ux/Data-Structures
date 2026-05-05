#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *head = NULL;

// Create node
NODE *create()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    return temp;
}

// Insert at beginning
void insertAtBegin(int n)
{
    NODE *temp = create();
    temp->data = n;

    if(head == NULL)
    {
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

// Insert at end
void insertAtEnd(int n)
{
    NODE *t, *temp = create();
    temp->data = n;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        while(t->next != NULL)
            t = t->next;

        t->next = temp;
    }
}

// Find size
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

// Insert at position
void insertAtAnywhere(int n)
{
    NODE *t, *prev, *temp;
    int p, loc = 1;

    printf("Enter position to insert: ");
    scanf("%d", &p);

    if(p == 1)
    {
        insertAtBegin(n);
        return;
    }

    if(p == size() + 1)
    {
        insertAtEnd(n);
        return;
    }

    if(p > size() || p <= 0)
    {
        printf("No such position\n");
        return;
    }

    temp = create();
    temp->data = n;

    t = head;

    while(loc < p)
    {
        prev = t;
        t = t->next;
        loc++;
    }

    prev->next = temp;
    temp->next = t;
}

// Display list
void display()
{
    NODE *temp = head;

    printf("List: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int ch, n;

    do
    {
        printf("\n1.Insert at Begin\n2.Insert at End\n3.Insert at Position\n4.Display\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &n);
                insertAtBegin(n);
                break;

            case 2:
                printf("Enter element: ");
                scanf("%d", &n);
                insertAtEnd(n);
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d", &n);
                insertAtAnywhere(n);
                break;

            case 4:
                display();
                break;

            default:
                exit(0);
        }

    } while(1);

    return 0;
}