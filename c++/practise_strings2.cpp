#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "MADAM";
    string s2 = "";
    int len = s1.length();
    s2.resize(len);
    for(int i =0 , j=len-1;i<len;i++,j--){
        s2[i]=s1[j];

    }
    cout<<s2<<endl;
    s2[len]='\0';
    if(s1.compare(s2)==0){
        cout<<"palindrome";

    }
    else{
        cout<<"not palindrome";
    }
   
    
    return 0;

}