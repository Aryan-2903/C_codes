#include<iostream>
using namespace std;
void fun(int x){
    if(x>0){
        fun(x-1);
    cout<<x<<endl;
    
    }
}
int main(){
    int a =7;
    fun(a);
    return 0;
}