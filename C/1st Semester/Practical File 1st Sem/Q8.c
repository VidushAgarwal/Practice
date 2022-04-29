#include <stdio.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int i, j, f = 0;
    for (i = 100; i < 200; i++)
    {
        f = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%5d", i);
    }
}