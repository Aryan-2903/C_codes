#include<iostream>
using namespace std;
int main(){
    int option ;
    cout<<"1. ADD "<<""<<"2. MUlTI "<<""<<"3. SUB "<<""<<"4. DIV\n ";
    cin>>option;
    int a,b,c;
    cout<<"enter any two numbers ";
    cin>>a>>b;
    switch(option){
        case 1: c=a+b;
        cout<<c;
        break;
        case 2: c=a*b;
        cout<<c;
        break;
        case 3: c=a-b;
        cout<<c;
        break;
        case 4: c=a/b;
        cout<<c;
    }
    return 0;

}