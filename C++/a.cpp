#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
    cout<<b<<endl;
    cout<<"Hello World"<< endl;
    b=b+1;
    cout<<b<<"  hello "<<a;
    return 0;
}