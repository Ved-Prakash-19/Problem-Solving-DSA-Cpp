#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}





// by using function method:--

// #include<iostream>
// using namespace std;

// void invertedfullpyramid(int n){

//     for (int i = 0; i < n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }


// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     invertedfullpyramid(n);
//     return 0;
// }


