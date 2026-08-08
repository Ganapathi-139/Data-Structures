#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;
    head = NULL;

    int ch = 1;

    while (ch)
    {
        newnode = malloc(sizeof(struct node));

        printf("Enter node data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to insert more? (0/1): ");
        scanf("%d", &ch);
    }

    temp = head;
    int count = 0;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        count++;
    }

    printf("The number of elements in linked list: %d", count);

    return 0;
}