#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cin>> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int s_x = x2-x1;
        int s_y = y2-y1;
        int a = s_x*s_x;
        int b = s_y*s_y;
        double z = sqrt(a+b);
        int x = z*z;

        }      


    return 0;
}