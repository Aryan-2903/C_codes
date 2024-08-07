#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<(int) 'c'<<endl;//to find the ascii values of characters

/* -10^9<<int>>10^9
    -10^12<<long int >> 10^12
    -10^18<<long long int >> 10^18
    rough values*/

    // to convert the scientific notation to normal number we put "fixed in cout eg-"
double a = 1000000;
double b = 1000000;
double c = a*b;
int j =100000000;
int k=1000000000000;
cout<<j*k<<endl;
cout<<j*1LL*k<<endl; //1LL is 1*long long int
cout<<c<<endl;
cout<<fixed<<c<<endl;
cout<<fixed<<setprecision(0)<<c<<endl;
//why can't we use double for storing large int values? because there is precison error in double eg-
double d = 1e24;
cout<<fixed<<d<<endl;
//for writing test cases we can use while(--t){code}
}