#include<iostream>
using namespace std;

int main(){
    int side;
    cout<< "Enter side of square :";
    cin>>side;

    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            if(i==0 || i==side-1){
                cout<<"*\t";
            }
            else{
                if(j==0 || j==side-1){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}