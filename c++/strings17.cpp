#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "Aryan";
    string s2 = "sharma";
    s1.push_back('S');
    cout<<s1<<endl;
    s1.pop_back();
    cout<<s1<<endl;
    s1.swap(s2);
    cout<<s1<<""<<s2<<endl;
    return 0;
}