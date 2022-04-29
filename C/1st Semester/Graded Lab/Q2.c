#include <stdio.h>
void main()
{
    int n, m, o, i, j, t;
    printf("Vidush Agarwal\n");
    printf("Enter size of first array : ");
    scanf("%d", &n);
    printf("Enter size of second array : ");
    scanf("%d", &m);
    o = n + m;
    int a[n], b[m], c[o];
    printf("Enter values for first array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter values for second array\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < m; j++)
    {
        c[i] = b[j];
        i++;
    }
    for (i = 0; i < o - 1; i++)
    {
        for (j = 0; j < o - i - 1; j++)
            if (c[j] > c[j + 1])
            {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
    }
    for (i = 0; i < o; i++)
    {
        printf("%d\t", c[i]);
    }
    printf("\nSAP ID : 1000014277");
}