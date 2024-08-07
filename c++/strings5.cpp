#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[10]="Aryan ";
    char B[10]="Sharma";
    strncat(A,B,4);
    cout<<A<<endl;
    return 0;
}