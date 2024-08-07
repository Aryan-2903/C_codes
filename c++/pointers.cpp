#include<iostream>
using namespace std;
int main(){
    int A[6]={2,4,6,8,20,24};
    int *p = A;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p = p+3;
    cout<<*p<<endl;
    cout<<p[-4];
    return 0;
}