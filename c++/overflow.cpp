#include<iostream>
using namespace std;
int main(){
    char a = 127;
    a++;
    cout<<(int)a<<endl;
    a++;
    cout<<(int)a<<endl;
    int b = INT_FAST32_MAX;
    b--;
    cout<<b;


}