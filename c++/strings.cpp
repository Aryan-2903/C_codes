#include<iostream>
using namespace std;
int main(){
    char A[7]="Aryan";
    char B[7]={'A','r','y','a','n'};
    char *C = "Aryan";
    char E[10]= {'A','r','y','a','n','\0','d','f'};
    string D = "Aryan"; //instead of using pointer we can use "string" to display the result as versions greater tha 11.0 of c++ doesnt support pointer char
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    cout<<D<<endl;
    cout<<E;
    return 0;
}