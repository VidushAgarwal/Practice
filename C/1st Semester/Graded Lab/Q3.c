#include <stdio.h>
void main()
{
    int n, i, j, larg, sl;
    printf("Vidush Agarwal\n");
    printf("Enter size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    larg = a[0];
    sl = 10000;
    for (i = 0; i < 3; i++)
    {
        larg = a[0];
        for (j = 0; j < n; j++)
        {
            if (a[j] > larg && a[j] < sl)
            {
                larg = a[j];
            }
        }
        sl = larg;
    }
    printf("Third largest number is : %d\n", larg);
    printf("SAP ID : 1000014277");
}