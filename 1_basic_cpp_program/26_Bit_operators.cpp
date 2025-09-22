#include<iostream>
using namespace std;

int main()
{
    cout<< (5 & 3) <<endl;
    cout<< (5 | 3) <<endl;
    cout<< ~(5) <<endl;
    cout<< (5^5^7^7) <<endl;
    cout<< (5^5^6) <<endl;    //0^n=n
    cout<< (5<<1) <<endl;    //0^n=n
    cout<< (5>>1) <<endl;    //0^n=n

    int n=10;
    if(n&1){
        cout<<"odd munber";
    }
    else{
        cout<<"Even number";
    }
    return 0;
}