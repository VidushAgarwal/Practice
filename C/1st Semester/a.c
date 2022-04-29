#include <stdio.h>
struct student
{
    int rollno, marks;
    char name[40];
};
void main()
{
    struct student s1, s2;
    printf("Enter values");
    scanf("%d", &s1.rollno);
    scanf("%d", &s1.marks);
    scanf("%s", &s1.name);
    scanf("%d", &s2.rollno);
    scanf("%d", &s2.marks);
    scanf("%s", &s2.name);
    printf("%d   %d   %s\n", s1.marks, s1.rollno, s1.name);
    printf("%d   %d   %s", s2.marks, s2.rollno, s2.name);
}