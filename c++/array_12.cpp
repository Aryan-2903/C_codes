#include<iostream>
using namespace std;
int main(){
    int A[10][10],B[10][10],C[100][100],r1,c1,r2,c2,i,j,k;
    cout<<"enter the number of rows and columns of first matrix\n";
    cin>>r1>>c1;
    cout<<"enter the number of rows and coloumns of second matrix\n";
    cin>>r2>>c2;
    while(c1!=r2){
        cout<<"error enter the number of rows and columns again\n";
        cout<<"enter the number of rows and columns of first matrix\n";
    cin>>r1>>c1;
    cout<<"enter the number of rows and coloumns of second matrix\n";
    cin>>r2>>c2;
    }
    cout<<"enter yhe elemts of first matrix";
    for(int i =0;i<r1;i++){
        for(int j =0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter the elements of second matrix";
    for(int i =0;i<r2;i++){
        for(int j =0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    C[i][j]=0;
    for(int i =0;i<c1;i++){
        for(int j =0;j<r2;j++){
            C[i][j]= C[i][j]+A[i][j]*B[i][j];
        }
    }
    for(int i =0;i<c1;i++){
        for(int j =0;j<r2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;

}
return 0;
}
