#include<bits/stdc++.h>
using namespace std;
const int N =1000;
int a[N][N];
void func(){
    a[0][0]=5;
}
int main(){
    a[0][0]=7;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;


    return 0;
}