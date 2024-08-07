#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string rev_str;
    for(int i = str.length()-1;i>=0;i--){
        rev_str.push_back(str[i]);

    }
    if(str == rev_str){
        cout<<"palindrome";
    }
    else cout<<"not a palindrome ";
}