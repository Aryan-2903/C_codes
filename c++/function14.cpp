#include<iostream>
using namespace std;
int x =20;
int main(){
    int x = 40;
    {
        int x =50;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}