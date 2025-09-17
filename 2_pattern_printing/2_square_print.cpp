// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }






// print using user input:-
#include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"enter number of side of square: ";
    cin>>side;
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}