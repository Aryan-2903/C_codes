#include<iostream>
using namespace std;
//default argument to replace two similar overloaded function
int sum(int x, int y, int z=0){
    return x+y+z;
}
int main(){
    int a=5,b=7,c=9;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
}