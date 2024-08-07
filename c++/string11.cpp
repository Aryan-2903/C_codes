#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[] = "232";
    char s2[] ="345.99";
    long int  x = strtol(s1,NULL,10);
    float y = strtof(s2,NULL);
    cout<<x<<endl<<y<<endl;
}