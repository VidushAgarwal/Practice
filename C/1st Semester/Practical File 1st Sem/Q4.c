#include <stdio.h>
#include <math.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int n, x, c = 0;
    float sum = 0;
    printf("Enter number to check\n");
    scanf("%d", &n);
    x = n;
    while (x > 0)
    {
        c = c + 1;
        x = x / 10;
    }
    x = n;
    while (x > 0)
    {
        sum = sum + pow((x % 10), c);
        x = x / 10;
    }
    if (sum == n)
        printf("%d is Armstrong Number", n);
    else
        printf("%d is not Armstrong Number", n);
}