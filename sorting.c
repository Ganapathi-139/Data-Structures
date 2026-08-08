//-------------------Merge Sort-------------------------//
/*#include <stdio.h>

void merge(int a[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[100];   // temporary array

    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
            k++;
    }

    // Copy remaining elements of left subarray
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of right subarray
    while (j <= ub)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    // Copy back to original array
    for (k = lb; k <= ub; k++)
    {
        a[k] = b[k];
    }
}

void mergesort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;

        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main()
{
    int n, i;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}*/

//---------------------------------//--------------------------------------//
//-------------------Quick Sort-------------------------//
/*#include <stdio.h>

void quicksort(int a[], int start, int end)
{
    if (start >= end)
        return;

    int i = start;
    int j = end;
    int pivot = a[start]; // choose first element as pivot

    while (i < j)
    {
        while (i < end && a[i] <= pivot) // rule1
            i++;

        while (a[j] > pivot) // rule2
            j--;

        if (i < j) // rule3
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[start]; // rule4
    a[start] = a[j];
    a[j] = temp;

    quicksort(a, start, j - 1);
    quicksort(a, j + 1, end);
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
        return 1;

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}*/
//---------------------------------//--------------------------------------//
//-------------------Radix Sort-------------------------//
/*#include <stdio.h>
// Function to get the maximum value in an array
int getMax(int a[], int n)
{
    int max = a[0], i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max; // Maximum element from the array
}
// Function to implement radix sort
void radixSort(int a[], int n)
{
    int big, nod = 0, steps, count[10];
    int i, j, k, bucket[10][n], loc, div = 1;
    big = getMax(a, n);
    // Count the number of digits in the largest number
    while (big > 0)
    {
        nod++;
        big = big / 10;
    }

    for (steps = 1; steps <= nod; steps++)
    {
        // Initialize count array
        for (j = 0; j < 10; j++)
        {
            count[j] = 0;
        }
        // Distribute elements into buckets
        for (i = 0; i < n; i++)
        {
            loc = (a[i] / div) % 10;
            bucket[loc][count[loc]++] = a[i];
        }
        // Collect elements back into the array
        k = 0;
        for (j = 0; j < 10; j++)
        { // Looping through digits 0-9
            for (i = 0; i < count[j]; i++)
            {
                a[k++] = bucket[j][i];
            }
        }
        // Move to the next digit
        div = div * 10;
    }
}
// Function to print array elements
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[100], n, i;
    printf("\nEnter No.of elements ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting, array elements are:\n");
    printArray(a, n);
    radixSort(a, n);
    printf("After applying Radix sort, array elements are:\n");
    printArray(a, n);
    return 0;
}*/