#include<iostream>
using namespace std;
int main(){
    int A[3][4]={{7,8,15,19},{4,8,9,17},{4,8,16,52}};
    for(int i =0 ;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}