#include <stdio.h>
void main()
{
    int m, n, i, j, sum = 0;
    printf("Vidush Agarwal\n");
    printf("Enter value of n ");
    scanf("%d", &n);
    m = n;
    int a[m][n], b[m][n];
    printf("Enter values for first matrix ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter values for second matrix ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
            {
                sum = sum + a[i][j] + b[i][j];
            }
        }
    }
    printf("Sum of lower triangle is : %d\n", sum);
    printf("1000014277");
}