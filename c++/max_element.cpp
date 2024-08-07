#include<iostream>
using namespace std;
int main(){
    int A[5]={2,4,6,8,3};
    int n , max ;
     max = 2;
    for(int i = 1 ; i<5;i++){
       
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<max;
    return 0;
}
