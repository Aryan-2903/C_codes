#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Aryan";
    char str[20];
    s.copy(str,3);
    str[3]='\0';
    cout<<str<<endl;
    return 0;
}