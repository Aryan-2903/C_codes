#include<iostream>
using namespace std;
int search(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(A[i]==key)
    
    return i;
    }
    return -1;

   
}
int main(){
    int A[]={4,6,8,10,19,20,22,28,30,37}, k;
    cout<<"enter the element to be found\n";
    cin>>k;
    int index = search(A,10,k);


cout<<index<<endl;
return 0;
}