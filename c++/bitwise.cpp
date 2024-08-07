#include<iostream>
using namespace std;
int main(){
    int a =11, b =5;
    //int z= a&b; -- and bitwise operator 
    //int z = a|b;   or bitwise operator
    //int z = a^b;  xor bitwise operator
    int z= a;
    cout<<z<<endl;

    int x =20;
    int y = x<<1;
    cout<<y<<endl;
    int d = x<<2;
    cout<<d<<endl;
    int c = x>>1;
    cout<<c<<endl;
    int e= x>>2;
    cout<<e<<endl;
    return 0;

}