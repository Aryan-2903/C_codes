#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "Aryan";
    int count = 0;
    for(int i =0; s1[i]!='\0';i++){
        count ++;
    }
    cout<<count<<endl;
    return 0;

}
// program to find the length of the string