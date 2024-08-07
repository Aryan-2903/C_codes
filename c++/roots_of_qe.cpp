#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float root1,root2,a,b,c;
    cout<<"enter the value of a,b,c respectively:\n";
    cin>>a>>b>>c;
    root1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"the 1st root of the equation :"<<root1<<endl<<root2;
    return 0;

}