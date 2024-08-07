#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Aryan kumar sharma";
    cout<<s.find("ryan")<<endl;
    cout<<s.rfind('a')<<endl;
    cout<<s.find('a')<<endl;
    cout<<s.find('a',5)<<endl;
    cout<<s.find('p')<<endl;
    cout<<s.find_first_of('A')<<endl;
    cout<<s.find_first_of('a')<<endl;
    cout<<s.find_first_of('a',5)<<endl;
    cout<<s.find_first_of("mu")<<endl;

    return 0;
}