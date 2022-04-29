#include <stdio.h>
#include <math.h>
//wap that computes the sum of the following series 1+2/!2+3/(3^(1/2))+4/!4...N TERMS
void main()
{
    float j, n, f = 1, sum = 0, x;
    printf("Enter n");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        f = 1;
        if (i % 2 == 2)
        {
            for (j = 1; j <= i; j++)
            {
                f = f * j;
            }
            sum = sum + i / f;
        }
        else
        {
            x = i / (sqrt(i));
            sum = sum + x;
        }
    }
    printf("%f", sum);
}