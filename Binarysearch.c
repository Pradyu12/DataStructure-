#include <stdio.h>

int binary_search(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high + low) / 2;


        if (array[mid] == x) {
            return mid;
        }

 
        if (array[mid] < x) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main(void) {
    int arr[20], item, n, i, result;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &item);

    result = binary_search(arr, item, 0, n - 1);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element is found at index %d\n", result);
    }

    return 0;
}