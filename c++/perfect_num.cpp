#include<iostream>
using namespace std;
int main(){
    int n,sum =0;
    cout<<" enter the number n \n";
    cin>>n;
    for(int i =1 ; i<=n;i++){
        if(n%i==0){
                sum=sum+i;
            
        }
    }
                   if(sum-n==n){
                    cout<<"number entered is a perfect number";
                }
                else {
                    cout<<"number entered is not a perfect number";
                }
                return 0;
            }
        

