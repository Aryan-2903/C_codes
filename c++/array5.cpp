#include<iostream>
using namespace std;
int main(){
    int A[7],n=7,key,i;
    cout<<"enter the numbers ";
    for(int i = 0; i<n;i++){
        cin>>A[i];
    }
    cout<<"enter the number you want to find";
    cin>>key;
    for(int i = 0 ; i<n;i++){
        if (A[i]==key){
            cout<<"found at"<<i;
            return 0;
        }
    }
    cout<<"not found";
    }

