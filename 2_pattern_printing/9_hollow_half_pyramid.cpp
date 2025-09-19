#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){

            if(i==0 || i==n-1 ||  j==0 || i==j){
                cout<< "* ";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }

    
    return 0;
}




//other methods:-----

// for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){

//             if(i==0 || i==1 ||  i==n-1){
//                 cout<< "* ";
//             }
//             else {  //middle rows
//                 if(j==0 || j==i+1-1){
//                     cout<< "* ";
//                 }
//                 else{
//                     cout<< "  ";
//                 }
                
//             }
//         }
//         cout<<endl;
//     }