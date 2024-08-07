#include<iostream>
using namespace std;
int maximum(int x, int y, int z){
    if(x>y&&x>>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else {
        return z;
    }
}
int main(){
    int x = 10,y = 15 , z = 29 , d;
    d = maximum(x,y,z);
    cout<<d<<endl;
    return 0;
}