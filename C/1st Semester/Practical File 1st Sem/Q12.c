#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int i, sum = 0, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Values\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    printf("Sum of all elements of array is : %d", sum);
}