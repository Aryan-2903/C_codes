#include<iostream>
using namespace std;

void display(){
    cout<<"aryan"<<endl;
}
int main(){
    void (*ptr)();  //declaration
    ptr = display;  //initialisation
    (*ptr)();  //function call
    return 0;
}