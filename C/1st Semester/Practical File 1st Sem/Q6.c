#include <stdio.h>
#include <math.h>
void main()
{
    printf("Vidush Agarwal 1000014277\n:");
    int i, s;
    for (i = 101; i < 999; i++)
    {
        s = sqrt(i);
        if (s * s == i)
            printf("%d\t", i);
    }
}