#include<iostream>
using namespace std;
int main(){
    int A[5],i,n,key,mid;
    cout<<"enter the numbers\n";
   
   for(int i =0;i<5;i++){

    cin>>A[i];
   }
      int l = A[0],h=A[4];
   cout<<"enter the number you want to find\n ";
   cin>>key;

   while(l<=h){
     mid = (l+h)/2;
     if(key ==  A[mid]){
       cout<<mid+1;
       return 0;
     }
     else if(key<A[mid]){
        h = mid -1;
      

     }
     else{
        l = mid +1;
       
     }
   }
   cout<<"not found";


}