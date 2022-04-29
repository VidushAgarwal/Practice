#include <stdio.h>
#include <string.h>
void main()
{
    char a[30], b[50];
    gets(a);
    scanf("%c", &b);
    printf("%s", a);
    puts(a);
    puts(strrev(a));
}