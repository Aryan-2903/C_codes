#include<iostream>
using namespace std;
int main(){
    int a = 8;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p;
    return 0;
}