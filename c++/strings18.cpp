#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Aryan";
    char str[20];
    s.copy(str,s.length());
    cout<<str<<endl;
    return 0;
}