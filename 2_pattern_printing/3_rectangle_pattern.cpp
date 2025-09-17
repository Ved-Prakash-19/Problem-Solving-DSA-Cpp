// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<3; i++){
//         for(int j=0; j<6; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }




// by using user input

#include<iostream>
using namespace std;

int main(){
    int length1;
    int length2;

    cout<<"Enter number of rows: ";
    cin>>length1; 

    cout<<"Enter number of cols: ";
    cin>>length2;   
    
    
    for(int i=0; i<length1; i++){
        for(int j=0; j<length2; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}