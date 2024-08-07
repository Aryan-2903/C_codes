#include<iostream>
using namespace std;
int main(){
    int A[10],key,n;
    cout<<"enter the numbers";
    for(int i = 0; i<n;i++){
        cin>>A[i];
    }
    cout<<"enter the number which you want to find";
    cin>>key;
    for(int i=0 ; i <n ; i++){
        if(A[i]==key){
            cout<<"found"<<i;
            return 0;
        }
    }
    cout<<"not found ";


}