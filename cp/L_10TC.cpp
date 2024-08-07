#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ct=0;
    while(n>0){
        n=n/2;
        ct++;
    }
    cout<<ct-1<<endl;
}