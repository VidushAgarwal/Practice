#include <stdio.h>
void ap(int *r)
{
    float a, p;
    int rr;
    rr = *r;
    a = (22.0 / 7.0) * (rr * rr);
    printf("Area of circle with radius %d is : %f\n", rr, a);
    p = 2.0 * 22.0 / 7.0 * rr;
    printf("Perimeter of circle with radius %d is : %f", rr, p);
}
void main()
{
    printf("Vidush Agarwal 1000014277\n");
    int r, a, p;
    printf("Enter radius\n");
    scanf("%d", &r);
    ap(&r);
}