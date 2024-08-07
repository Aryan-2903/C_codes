#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "Aryan";
    string s2 =" Sharma";
    cout<<s1.at(2)<<endl;
    cout<<s1[2]<<endl;
    s1[2]='l';
    cout<<s1<<endl;
    s1[2]='y';
    cout<<s1<<endl;
    s1 = s1 + s2;
    cout<<s1<<endl;
    string s3 = s1 + " sharma";
    cout<<s3<<endl;
    s1 = s2;
    cout<<s1<<endl<<s2<<endl;
    return 0;

}