#include<iostream>
using namespace std;
int main(){
    int n ,r,sum = 0,m;
    cout<<"enter any  number\n";
    cin>>n;
    m=n;
    while(n>0){
    r= n%10;
    n=n/10;
    sum = sum + (r*r*r);
    }
    cout<<sum<<endl;
    if(sum==m){
        cout<<"armstrong number";

    }
    else{
        cout<<"not armstrong number";
    }
    return 0;

}