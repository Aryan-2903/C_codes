#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter any number \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum= sum+i;
    }
    cout<<sum<<endl;
    return 0;
}