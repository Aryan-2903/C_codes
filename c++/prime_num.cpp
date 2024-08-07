#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number";
    cin>>n;
    int count = 0;
       for(int i =1 ; i<=n;i++){
        if(n%i==0){
            count++;
        }
       }
       cout<<"No. of factors = "<<count<<endl;
       if(count==2){
        cout<<"prime number";

       }
       else{
        cout<<"not prime";
       }
       return 0;
    }
