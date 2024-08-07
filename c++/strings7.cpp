#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[] = "Aryan ";
    char B[10] = "";
    strncpy(B,A,3);
    cout<<B<<endl;
    return 0;
}