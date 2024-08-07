#include<iostream>
#include<string>
using namespace std;
int main(){
   string s = "aryansharma@gmail.com";
   int index = s.find('@');
   cout<<index<<endl;
   cout<<s.substr(0,index)<<endl;
    
    return 0;

}