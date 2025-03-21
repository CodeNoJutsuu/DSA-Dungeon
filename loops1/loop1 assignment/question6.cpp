// Write a program to take an integer n as input and print numbers
// from n to 1 using a loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
}