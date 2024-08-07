#include<iostream>
using namespace std;
int main(){
    int A[4]={2,1,5,23};
    for(int x:A){
        cout<<x<<endl;
    }
    // int x:A is declaring the variables for the elements in A
    return 0;
}