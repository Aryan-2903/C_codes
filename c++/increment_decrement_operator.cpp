#include<iostream>
using namespace std;
int main(){
    int x = 5,y;
    y=++x;
    cout<<y<<endl<<x<<endl;
    int z= 5;
    y=z++;
    cout<<y<<endl<<x<<endl;

}