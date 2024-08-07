#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
/*
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum =0;
        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum = sum +arr[i][j];

            }
        }
        cout<<sum<<endl;
        
    }

    return 0;
}

*/

long long pf[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum = pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
    }
    cout<<sum<<endl;

}
//O(N)+O(T)=O(N)