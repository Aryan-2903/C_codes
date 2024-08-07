#include<iostream>
using namespace std;
int main(){
    int max;
    int A[5]={4,6,3,5,9};
        max =4;
    for(int i = 1;i<5;i++){

        if(A[i]>max){
            max = A[i];
            
        }
    }
     cout<< max;
    return 0;
}