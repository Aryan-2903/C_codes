#include<iostream>
using namespace std;
/* question is to print the modulo of fact with M
constraints
1<=N<=100
M=47 */
int main(){
    int n;
    cin>>n;
    int M=47;
    long long int fact =1;
    for(int i=2;i<n;i++){
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
    
}