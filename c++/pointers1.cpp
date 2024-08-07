#include<iostream>
using namespace std;
int main(){
    int A[6]{1,2,3,4,5,6};
    int *p = A;
    for(int i =0 ; i<6 ; i++){
        cout<<A[i]<<endl;
    }
    for(int i =0 ; i<6 ; i++){
        cout<<i[A]<<endl;
    }
    for(int i =0 ; i<6 ; i++){
        cout<<*p<<endl;
        p++;
    }
    for(int i =0 ; i<6 ; i++){
        cout<<*(p+1)<<endl;
    }
    

    return 0;
}