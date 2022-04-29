#include<stdio.h>
void abc(){
    static int a = 0;
    int b = 0;
    b++;
    a++;
    printf("a  %d\n", a);
    printf("b %d\n", b);
}
void main(){
    abc();
    abc();
}