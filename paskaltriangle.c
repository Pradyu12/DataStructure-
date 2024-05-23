#include <stdio.h>
#include<conio.h>
int paskal(int, int);
int main() {
    int n, f;
    int i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++) {
        for(j = 0; j <= n - i; j++)
            printf("  ");
        for(j = 0; j <= i; j++) {
            printf("%d ", paskal(i, j));
        }
        printf("\n");
    }
    getch();
    return 0;
}

int paskal(int n, int r) {
    if((n == r) || (r == 0))
        return 1;
    return paskal(n - 1, r - 1) + paskal(n - 1, r);
}