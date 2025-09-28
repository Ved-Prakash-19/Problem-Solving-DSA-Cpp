#include<iostream>
using namespace std;

int main(){

    int n;
    int setbitcount = 0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n != 0){
        int lastbit = (n & 1);
        if(lastbit == 1){
            setbitcount = setbitcount + 1;
        }

        n = n>>1; 
    }
    cout<<"total setbits count: " << setbitcount <<endl;

    
    return 0;
}