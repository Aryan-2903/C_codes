#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[20]="Aryan";
    char S2[20]="ry";
    strstr(S1,S2);
    cout<<strstr(S1,S2);
    return 0;

}