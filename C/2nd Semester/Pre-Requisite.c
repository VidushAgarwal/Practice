//Program to demonstrate impact of increment and decrement operators on pointer.
#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    int *ptr;
    a = 16;
    ptr = &a;
    printf("Value of pointer is %d\n", ptr);
    (ptr)++;
    printf("Post Incremented value of pointer is %d\n", ptr);
    ++(ptr);
    printf("Pre Incremented value of pointer is %d\n", ptr);
    (ptr)--;
    printf("Post decrement value of pointer is %d\n", ptr);
    --(ptr);
    printf("Pre decrement value of pointer is %d\n", ptr);
}