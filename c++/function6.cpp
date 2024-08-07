#include<iostream>
using namespace std;
template<class T>
T maxi(T x ,T y){
    if(x>y){
        return x;
    }
    else return y;
}

int main(){
    int x=10,y=5;
    float l=12.5,m=17.3;
    cout<<maxi(10,5)<<endl;
    cout<<maxi(12.5,17.3)<<endl;
    return 0;

}