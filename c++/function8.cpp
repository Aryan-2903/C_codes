#include<iostream>
using namespace std;
int swap(int a, int b){
    cout<<a<<endl<<b<<endl;  //formal parameter
    int temp = b;
    b=a;
    a=temp;
    cout<<a<<endl<<b<<endl;

}
int main(){
    int x = 10,y=15;
    swap(x,y);   //actual parameter
    cout<<x<<endl<<y;
    return 0;
}
//call by value