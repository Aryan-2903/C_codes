#include<iostream>
using namespace std;
int main(){
    int A[2][3]={5,6,7,8,9,17};
    int B[2][3]={8,12,14,19,26,72};
    int C[2][3];
    for(int i = 0;i<2;i++){
        for(int j  =0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}