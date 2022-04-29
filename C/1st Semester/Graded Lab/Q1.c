#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Vidush Agarwal\n");
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = i; j < n; j++)
        {
            a[j] = a[j + 1];
        }
    }
    printf("Values after removing elements\n");
    for (i = 0; i < n - 3; i++)
        printf("%d\t", a[i]);
    printf("\nSAP ID is 1000014277");
}