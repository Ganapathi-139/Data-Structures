/*#include <stdio.h>
int main()
{
    int n, i;
    float marks[100], total = 0, avg;

    printf("Enter no.of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    avg = total / n;
    printf("\nTotal marks=%.2f\n", total);
    printf("Avg marks=%.2f\n", avg);

    return 0;
}*/
//-----------------------------///------------------------------------//
/*#include <stdio.h>

void quicksort(int a[], int start, int end)
{
    int i, j, pivote, temp;
    if (start < end)
    {
        pivote = a[start];
        i = start;
        j = end;
        while (i < j)
        {
            while (a[i] <= pivote && i < end)
            {
                i++;
            }
            while (a[j] > pivote)
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[start];
        a[start] = a[j];
        a[j] = temp;
        quicksort(a, start, j - 1);
        quicksort(a, j + 1, end);
    }
}
int main()
{
    int i, n, a[100];

    printf("Enter no.of eliments: ");
    scanf("%d", &n);

    printf("Enter eliments: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}*/
//--------------------------------------//---------------------------------//
/*#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push()
{
    int value;

    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("Inserted successfully\n");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}*/
//------------------------------------//-------------------------------------//
/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    printf("Node data: %d\n", head->data);
    return 0;
}*/
//---------------------------------------//---------------------------------//
/*#include <stdio.h>

struct student
{
    int no;
    char name[10];
    float marks;
};

int main()
{
    int n;
    printf("Enter how many students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d data (no name marks): ", i + 1);
        scanf("%d %s %f", &s[i].no, s[i].name, &s[i].marks);
    }

    printf("\n--- Student Data ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: No = %d, Name = %s, Marks = %.2f\n",
               i + 1, s[i].no, s[i].name, s[i].marks);
    }

    return 0;
}*/

/*#include <stdio.h>

enum Week
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    enum Week day;
    day = Wed;
    printf("%d", day);
    return 0;
}*/