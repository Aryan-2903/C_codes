#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[50]="Aryan Sharma";
    cout<<strlen(A)<<endl;
    char *B;
    cout<<"enter a string\n";
    cin.getline(B,20);
    cout<<strlen(B)<<endl;
    return 0;
}