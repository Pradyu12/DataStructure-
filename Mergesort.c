#include <stdio.h>

void merge(int arr[], int start, int mid, int end);
void mergsort(int arr[], int start, int end);
void display(int arr[], int size);

int main()
{
    int n, i;
    printf("Enter array size\n");
    scanf("%d", &n);
    int arr[20];
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original array\n");
    display(arr, n);
    mergsort(arr, 0, n - 1);
    printf("Sorted array\n");
    display(arr, n);
}

void mergsort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergsort(arr, start, mid);
        mergsort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int arr[], int start, int mid, int end)
{
    int leftarr[10], rightarr[10];
    int len1 = mid - start + 1;
    int len2 = end - mid;

    for (int i = 0; i < len1; i++)
        leftarr[i] = arr[start + i];
    for (int j = 0; j < len2; j++)
        rightarr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;

    while (i < len1 && j < len2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}