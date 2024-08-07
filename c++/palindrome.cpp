#include<iostream>
using namespace std;
int main(){
    int n, r, m;
    int rev = 0;
    cout<<"enter any number\n";
    cin>>n;
    m=n;
    while(n>0){
        r = n%10;
        n=n/10;
        rev = rev*10+r;
    }
    if (rev==m){
        cout<<"palindrome";

    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}