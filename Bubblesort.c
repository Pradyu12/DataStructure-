#include<stdio.h>
#include<conio.h>
void main() {
    int arr[25], n, i, j, temp;
    clrscr();
    printf("Enter size of array \n");
    scanf("%d", &n);
    printf("Enter elements of Array \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("array element before sort\n);
    for (i = 0; i < n 1; i++)
    printf("%d\n",a[i]);
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-1;j++)
     {
      if(a[i]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Array after sort \n");
for(i=0;i<n;i++)
printf("___%d\n",a[i]);
getch();
}
