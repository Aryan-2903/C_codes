#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int fact = 1;
        for(int i=2;i<=n;i++){
            fact = (fact *i);

        }
        cout<<fact<<endl;
    }

    return 0;
}
//O(T*N)=O(N*N)=(1e5*1e5)=1e10 > the value of integer that's why it cant run in 1sec
*/
long long fact[N];
int main(){
    fact[0]=fact[1]=1;
    for(int i =2;i<N;i++){
        fact[i]=(fact[i-1]*i) % M;

    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
}
//O(T)+O(N)=2*O(N)=O(N) which is 1e5 so it can run in 1 sec



