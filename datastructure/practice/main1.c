#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
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

        if (head == NULL)
        {

            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head = ptr;
        }

        printf("\nNode inserted\n");
    }
}

void begin_delete()
{
    struct node *ptr;

    if (head == NULL)
    {
        printf("\nUnderflow");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        printf("\nnode deleted\n");
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
            ptr->prev = NULL;
            head = ptr;
            printf("\nNode inserted\n");
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
            printf("\nNode inserted\n");
        }
    }
}

void last_delete()
{
    struct node *ptr, *temp;

    if (head == NULL)
    {
        printf("\nunderflow");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->prev = NULL;
        ptr->next = NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }
}