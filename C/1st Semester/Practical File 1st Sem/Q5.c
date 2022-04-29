#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int n, sum = 0, i;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        sum = sum + i;
    printf("Sum of first %d numbers is %d\n", n, sum);
}