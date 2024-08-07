#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "qwertyuiopasdfghjklzxcvbnm ";
    int vowel =0;
    int cons =0;
    int space =0;
    for(int i =0;s[i]!='\0';i++){
        if(s[i]==65|| s[i]==97||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==101||s[i]==105||s[i]==111||s[i]==117 ){
            vowel++;
        }
    else if(s[i]==32){
        space++;
    }
    else{
        cons++;
    }
    }
    cout<<vowel<<endl<<cons<<endl<<"words"<<space+1<<endl;
    
    return 0;

}