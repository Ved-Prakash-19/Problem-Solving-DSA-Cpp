#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< j+1 <<" ";
        }
        cout<<endl;
    }

    // other questions:- 
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<i+1; j++){
            cout<< ch <<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}

