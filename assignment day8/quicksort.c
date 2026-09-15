#include <stdio.h>

int split(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    int temp;

    while (i < j)
    {

        while (a[i] <= pivot && i < high)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j)
        {

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = split(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{

    int a[100], n;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter Elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
} 