//display the ap 1,3,5,7,9... upto n terms
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<endl;
//     }

// }

// 2nd method-using extra variable
#include<iostream>
using namespace std;
int main(){
    int a=2;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=5;
    }
}