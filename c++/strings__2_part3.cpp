#include<iostream>
using namespace std;
int main(){
    char A[20],B[20];
    cout<<"name?\n";
    cin.getline(A,50);
    cout<<A<<endl;
    cout<<"name again\n";
    cin.getline(B,20);
    cout<<B;
    return 0;
}