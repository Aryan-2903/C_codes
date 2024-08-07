#include<iostream>
#include<string>
using namespace std;
int  main(){
    string str;
    cout<<"enter any string\n";
    getline(cin,str);
   cout<<str.length()<<endl;
   cout<<str.size()<<endl;
   cout<<str.capacity()<<endl;
   str.resize(30);
   cout<<str.capacity()<<endl;
   cout<<str.max_size()<<endl;
   if(str.empty()){
    cout<<"string is empty";

   }
   else{
    cout<<"string is not empty";
   }

    return 0;


}