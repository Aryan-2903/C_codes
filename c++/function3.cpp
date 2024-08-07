#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n){
   int z= pow(m,n);
    return z;
}
int main(){
    int a=2,b=3,c;
    c = power(a,b);
    cout<<c<<endl;
    return 0;
}