#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "aryan";
    string :: iterator it;
    for(it = s1.begin();it!=s1.end();it ++){
        cout<<*it;
    }
    cout<<endl;
    for(it = s1.begin();it!=s1.end();it ++){
        *it = *it -32;
        cout<<s1<<endl;
    }
    cout<<s1;
    return 0;
}