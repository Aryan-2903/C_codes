#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,total,avg;
    cout<<"enter any three numbers";
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg=total/3.0;
    if(avg>=60){
        cout<<"A";
    }
    else if (avg>=30&&avg<60){
        cout<<"B";
    }
    else{
        cout<<"C";
    }
    cout<<"c";
}