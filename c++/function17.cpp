#include<iostream>
using namespace std;
void fun(int x){
    if(x>0){
    cout<<x<<endl;
    fun(x-1);
    
    }
}
int main(){
    int a =7;
    fun(a);
    return 0;
}