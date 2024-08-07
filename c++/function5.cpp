#include<iostream>
using namespace std;
int min(int x, int y){
    if (x<y){
        return x;
    }
    else return y;
}
int min(int x, int y, int z){
    if (x<y&&x<z){
        return x;
    }
    else if(y<x&&y<z){
        return y;
    }
    else return z;
}
float min(float x, float y){
    if (x<y){
        return x;
    }
    else return y;
}

int main(){
    int a = 2,b=3,c=6,l,m;
    float x = 2.3, y=1.2,n;
    l = min(a,b);
    m = min(a,b,c);
    n = min(x,y);
    cout<<l<<endl<<m<<endl<<n<<endl;

    return 0;
}