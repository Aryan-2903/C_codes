#include<iostream>
//N<100000
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sum =0;
    }
}
// O(1)+O(1)+O(N)=O(N)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        int sum=0;
       }
    }
}
//O(1)+O(1)+O(N*N=N^2)=O(N^2) - this will be time exceeded error as O(N)should be <=10^7