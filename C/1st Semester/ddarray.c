#include <stdio.h>
void main()
{
    int i, j, m, n, jkl=122;
    printf("Enter number of rows");
    scanf("%d", &m);
    printf("Enter number of columns");
    scanf("%d", &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\n", a[i][j]);
        }
    }
}