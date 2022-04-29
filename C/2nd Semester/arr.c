#include <stdio.h>
void abc(int a[]){
    int i;
    for(i=0;i<6;i++){
        printf("%d  ", a[i]);
    }
}
void main(){
    int a[]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i++){
        printf("%d  ", a[i]);
    }
    abc(a);
}