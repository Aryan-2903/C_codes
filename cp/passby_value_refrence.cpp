#include<iostream>
using namespace std;
void increment(int &a, int b){
    a++;
    b++;
}
int main(){
    int a=5,b=10;
    cout<<a<<" "<<b<<endl;
    increment(a,b);
    cout<<a<<" "<<b<<endl;


    return 0;
}

/*here a is pass by value in which a copy of the original value is passed while "b" is pass by refrence in which a refrence
is passed to the function */