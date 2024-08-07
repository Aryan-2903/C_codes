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
    for(int i =0; s1[i]!='\0';i++){
        cout<<s1[i];
    }
    cout<<endl;
    for(int i =0; s1[i]!='\0';i++){
        s1[i]=s1[i]-32;
    }
    cout<<s1;
    return 0;
}