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
    head = 0;
    int ch = 1;
    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to insert more give 0/1: ");
        scanf("%d", &ch);
    }
    temp = head;
    int count = 0;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        count = count + 1;
    }
    printf("The no.of elements in linked list %d", count);
}

/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int ch = 11;
    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the node data");
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do u want to give more 0/1: ");
    }
}*/