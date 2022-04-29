#include <stdio.h>


 main()
{
    int n, i, j;
    printf("Enter size of list : ");
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
        printf("%d\n", a[i]);
}