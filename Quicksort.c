#include <stdio.h>

void quicksort(int arr[], int start, int end);
int partition(int arr[], int start, int end);
void swap(int *x, int *y);

int main()
{
    int i, n, arr[10];
    printf("Enter array size\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quicksort(arr, 0, n - 1);
    printf("After the quicksort\n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("\n");
    return 0;
}

void quicksort(int arr[], int start, int end)
{
    int pindex;
    if (start < end)
    {
        pindex = partition(arr, start, end);
        quicksort(arr, start, pindex - 1);
        quicksort(arr, pindex + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}