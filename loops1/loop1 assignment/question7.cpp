// Write a C++ program to take an integer n as input and print the sum
// of the first n natural numbers using a loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }  
    cout<<sum<<endl;
}