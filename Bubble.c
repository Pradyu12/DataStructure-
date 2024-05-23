#include<stdio.h>
#include<conio.h>

void main() {
    int arr[25], n, i, j, temp;
    clrscr();
    printf("Enter number of elements \n");
    scanf("%d", &n);
    printf("Enter elements of Array \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getch();
}
