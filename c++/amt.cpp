#include<iostream>
using namespace std;
int main(){
    float amount;
    cout<<"enter the bill amount ";
    cin>>amount;
    if(amount>=5000){
        amount = amount-((20*amount)/100);
        cout<<amount; 
    }
    else if(amount >=2000 && amount<5000){
        amount = amount -((10*amount)/100);
        cout<<amount;
    }
    else{
        amount = amount - ((5*amount)/100);
    }
    return 0;
}