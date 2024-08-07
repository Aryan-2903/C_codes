#include<iostream>
using namespace std;
int k=0; //global variable
void func(){
    int a =10; //local variable
    k = k+a;
    cout<<k<<endl;
}
int main(){
    k =20;
    func();
    k++;
    cout<<k<<endl;
    return 0;
}