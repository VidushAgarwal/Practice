#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int i, n, x, f = 0;
    printf("Enter length of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter values\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to be searched\n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            f = 1;
            printf("%d found in the array", x);
            break;
        }
    }
    if (f == 0)
        printf("%d not found in the array", x);
}