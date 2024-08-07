#include<iostream>
using namespace std;
int main(){
    float A[100],sum=0,avg,i,n;
    cout<<"enter the number of elements";
    cin>>n;
      cout<<"enter the numbers\n";
     for(int i =0;i<n;i++){
    cin>>A[i];
     }
    for(int i =0;i<n;i++){
        sum = sum+A[i];

    }
    cout<<sum<<endl;
    avg = sum/n;
    cout<<avg;
}