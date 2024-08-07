#include<iostream>
using namespace std;
void func(){
    static int v = 10;
    v++;
    int a =20;
    a++;
    cout<<v<<" "<<a<<endl;
}
int main(){
    func();
    func();
    func();
    return 0;
}