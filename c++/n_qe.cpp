#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter any three numbers\n";
    cin>>a>>b>>c;
    float d = b*b - (4*a*c);

    if(d>0){
        cout<<"real and diffrenet roots ";

    }
    else{
        if(d==0){
            cout<<"real and equal roots";
        }
        else{
            cout<<"imaginary roots";
        }
    }
    return 0;
}