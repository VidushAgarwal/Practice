#include <stdio.h>
#include <stdlib.h>
#include "final.h"
void main()
{
    int n1, n, m, value1, value2, x, y, c, a, b, row, ans;
    float angle, value3;
    
    printf("SHASHANK RAWAT \n");
    printf("SAP ID : 1000014024");

    printf("Menu\n");
    printf("1.Ackerman function\n");
    printf("2.Computation of m*n using recursive function\n");
    printf("3.Finding the complete solution of the roots of quadratic equation using function\n");
    printf("4.Print the triangle( equilateral), square and  +( plus) using *(star)\n");
    printf("5.Compute the value of sin(x)\n");
    printf("Enter your choice(1-5):- ");
    scanf("%d", &n1);
    switch (n1)
    {
    case 1:
        printf("Enter the value of m:- ");
        scanf("%d", &m);
        printf("Enter the value of n:- ");
        scanf("%d", &n);
        value1 = A(m, n);
        printf("value of the function is %d", value1);
        break;
    case 2:
        printf("Enter the Value of the a is:- ");
        scanf("%d", &x);
        printf("Enter the value of the b is:- ");
        scanf("%d", &y);
        value2 = recursive(x, y);
        printf("value of the function is %d", value2);
        break;
    case 3:

        quad(a, b, c);
        break;
    case 4:
        printf("Enter the numbers of rows:- ");
        scanf("%d", &row);
        pattern(row);
        break;
    case 5:
        printf("Enter the value of the angle in degree:- ");
        scanf("%f", &angle);
        value3 = fun(angle);
        printf("Value of sin(%f) is %f", angle, value3);
        break;
    default:
        printf("You choose invalid number, Please try again");
    }
}