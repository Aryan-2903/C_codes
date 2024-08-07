#include<iostream>
using namespace std;
int main(){
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    for(int i = 0;i<12;i++){
        if(A[i]>0){
            pcount = pcount +1;
        }
        else{
            ncount = ncount +1;
        }
    }
    cout<<"positive numbers count "<<pcount<<endl<<"negative number count "<<ncount;
    return 0;
}