    #include <iostream>
    using namespace std;
    int main(){
        int a = 15 , b = 10 , i=6;
    //if(a>b && ++i){}
    //cout<<i;  output - 7
    if(a<b && ++i){}
    cout<<i;
    return 0;
    // always be careful while using increment decrement oprator in a conditional statement.

    }