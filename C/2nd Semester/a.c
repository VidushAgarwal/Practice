#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    float c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    printf("%d %d\n", a+b,a-b);
    printf("%f %f", c+d,c-d);
    return 0;
}