#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str_rev;
        for(int i= str.size()-1;i>=0;i--){
            str_rev.push_back(str[i]);
        }
        cout<<str_rev<<endl;
        if(str == str_rev){
            cout<<"palindrome"<<endl;
        }
        else cout<<"not palindrome";


    }

    return 0;
}