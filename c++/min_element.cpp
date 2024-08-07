#include<iostream>
using namespace std;
int main(){
    int A[5]={4,7,2,9,1};
    int min ;
    min = A[0];
    for(int i = 1;i<5;i++){
        if(A[i]<min){
            min = A[i];
        }
    }
    cout<<min;
    return 0;
}