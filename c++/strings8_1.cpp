#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[20]="Aryan";
    char S2[20]="p";
    if(strstr(S1,S2)!=NULL){
    cout<<strstr(S1,S2);
}
else{
    cout<<"not found";
}

    return 0;

}