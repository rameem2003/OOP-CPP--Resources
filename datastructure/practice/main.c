#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

struct node *head;

void begin_insert()
{
    int item;
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter a number: ");
        scanf("%d", &item);

        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode Insert begin success\n");
    }
}

void begin_delete()
{
    struct node *ptr;

    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining ...\n");
    }
}

void last_insert()
{
    int item;
    struct node *ptr, *temp;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter a number: ");
        scanf("%d", &item);

        ptr->data = item;

        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode Insert last success\n");
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode Insert last success\n");
        }
    }
}

void last_delete()
{
    struct node *ptr, *ptr1;

    if (head == NULL)
    {
        printf("Underflow");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nNode delete last success\n");
    }
    else
    {
        ptr = head;

        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }

        ptr1->next = NULL;
        free(ptr);
        printf("\nNode delete last success\n");
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    begin_insert();
    begin_insert();
    begin_insert();
    display();
    begin_delete();
    display();
    last_insert();
    display();
    last_delete();
    display();
}