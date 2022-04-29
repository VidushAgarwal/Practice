#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int i, sum = 0, x;
    for (i = 400; i <= 600; i++)
    {
        sum = 0;
        x = i;
        while (x > 0)
        {
            sum = sum + x % 10;
            x = x / 10;
        }
        if (sum % 2 == 0)
            printf("%d\t", i);
    }
}