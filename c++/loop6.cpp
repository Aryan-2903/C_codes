#include<iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"enter any number\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial of " <<n<<" is "<<fact;
    return 0;

}
