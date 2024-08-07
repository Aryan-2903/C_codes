#include<iostream>
using namespace std;
int main(){
    char A[20],B[20];
    cout<<"enter your name\n";
    cin.get(A,20);
    cout<<A<<endl;
    cin.ignore();
    cout<<"enter your name again\n";
    cin.get(B,20);
    cout<<B<<endl;
    return 0;


}