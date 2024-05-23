#include <stdio.h>
#include<conio.h>
void move(int, char, char, char);
void main() {
    int n;
    clrscr();
    printf("How many numbers of disk: ");
    scanf("%d", &n);
    move(n, 'A', 'B', 'C');
    getch()
}
void move(int n, char x, char y, char z) {
    if (n > 0) {
        move(n - 1, x, z, y);
        printf("\n %c to %c", x, y);
        move(n - 1, z, y, x);
    }
}