//WAP that reads a file from disc and prints its content
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *p;
    char a[50];
    int i;
    p = fopen("abc.txt", "r");
    if (p == NULL)
    {
        printf("Unable to open file");
        exit(1);
    }
    while (1)
    {
        char ch = fgetc(p);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(p);
    p = fopen("ac.txt", "w");
    printf("Enter string");
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
        printf("%d",(int)a[i]);
        fputc((int)a[i], p);
    }
}