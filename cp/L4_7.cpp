#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int N;
        cin>>N;
        for (int i =0;i<N;i++){
            for(int j =0;j<i;j++){
                cout<<"*"<<endl;
                cout<<"#"<<endl;
            }
        }
    }
}