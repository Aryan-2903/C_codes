#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string rev_s;
    int n = s.length();
    cout<<n<<endl;
    for(int i = s.length()/2;i>=0;i--){
        if(s[i]==s[n-1-i]){
            cout<<"palindrome"<<endl;
        }
        else cout<<"not palindrome"<<endl;
    }
    


}