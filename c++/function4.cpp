#include<iostream>
using namespace std;
int sum(int x , int y){
    return x+y;
}
int sum(int x, int y, int z){
    return x+y+z;
}
float sum(float x, float y){
    return x+y;
}

int main(){
    int a=5,b=7,c=8,m,n;
    float j=3.2,k=5.6,l;
    m= sum(a,b);
    n= sum(a,b,c);
    l= sum(j,k);
    cout<<l<<endl<<m<<endl<<n<<endl;

    return 0;
}