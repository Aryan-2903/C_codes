#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int a[N];
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,m;
        cin>>l>>m;
        int sum =0;
        for(int i=l;i<=m;i++){
            sum = sum +a[i];

        }
        cout<<sum<<endl;
        
    }

    return 0;
}
//O(N)+O(T*N)=O(N^2)
*/
int pf[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,m;
        cin>>l>>m;
        int sum = 0;
        sum = pf[m]-pf[l-1];
        cout<<sum<<endl;
    }
}
//O(N)+O(T)=O(N)