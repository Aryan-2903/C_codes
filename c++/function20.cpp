#include<iostream>
using namespace std;
int max(int x,int y){
    return x>y ? x:y;
}
int min(int x, int y){
    return x<y ? x:y;
}
int main(){
    int (*ptr)(int,int);
    ptr = max;
   int v1= (*ptr)(50,20);
   cout<<v1<<endl;
    
    ptr = min;
    int v2 = (*ptr)(50,20);
    cout<<v2<<endl;
    return 0;
}