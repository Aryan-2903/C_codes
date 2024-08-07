#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int A[6]={3,5,2,5,12,30};
    for(int i =0 ; i<6;i++){
       sum = sum + A[i];
         cout<<sum<<endl;
    }
    cout<<sum;
    return 0;
}