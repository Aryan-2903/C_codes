#include<iostream>
using namespace std;
int main(){
    int x = 5,y=10,z;
    z= ++x*y;
    cout<<z<<endl<<x<<endl;
    int a = 5, b=10,c;
    c=a++*b;
    cout<<c<<endl<<a;
}