#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    int count =0;
    if(N%2==0){
    for(int i=1;i<(N/2)-1;i++){

        int l = (N/2)-i;
        if(i==l || i>l){
            break;
        }
        else count ++;

    
    }
    
    cout<<count<<endl;
    }
    else cout<<0<<endl;
    return 0;

}