#include<iostream>
using namespace std;
int main(){
    float b_s, p_a,p_d; // b_a - basic salary , p_a percentage allowances, p_d percentage deductions
    cout<<"enter the basic salary\n";
    cin>>b_s;
    cout<<"enter the percetage allowances\n";
    cin>>p_a;
    cout<<"enter the percentage deduction\n";
    cin>>p_d;
    float n_s = (b_s + ((b_s * ((p_a)/100)) - (b_s*((p_d)/100))));
    cout<<n_s<<endl;
    return 0;


}