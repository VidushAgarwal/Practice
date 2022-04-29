#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int n, x, sum = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digits of %d is : %d", x, sum);
}