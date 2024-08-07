#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N];
/*
int main(){
    int n,t;
    cin>>n>>t;
    while(t--){
        int a,b,d;
        cin>>a>>b>>d;
        for(int i=a;i<=b;i++){
            arr[i]=arr[i]+d;
        }
    }
        long long maxi = -1;
        for(int i=1;i<=n;i++){
            if(arr[i]>maxi){
                maxi = arr[i];

            }
        }
        cout<<maxi<<endl;


        
    }
    //O(T*N+N)==O(N^2)
*/
int main(){
    int n,t;
    cin>>n>>t;
    while(t--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]=arr[a]+d;
        arr[b+1]=arr[b+1]-d;
    }
    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    long long maxi =-1;
    for(int i=1;i<=n;i++){
        if(arr[i]>maxi){
            maxi =arr[i];
        }
    }
    cout<<maxi<<endl;
}
//O(T+N)=O(N)