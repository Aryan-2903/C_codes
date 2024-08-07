#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "Aryan sharma";
    string :: iterator it;
    int count = 0;
    for(it = s1.begin();it!=s1.end();it ++){
        count++;
    }
    cout<<count<<endl;
    
    return 0;

}