#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    // fancy pattern
    for(int i=0; i<n; i++){
        for(int j=0;  j<2*i+1; j++){
            if(j % 2 == 0){
                cout<<i+1;
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    n--;   //uper 5 row tha then n-- niche 4 row total - 9

    // inverted fancy pattern:-
    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-i)-1; j++){
            if(j % 2 == 0)
                cout<<n-i;
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    return 0;
}
            
