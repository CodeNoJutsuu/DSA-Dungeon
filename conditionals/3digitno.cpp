#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"it's a three digit number";
    }
    else{
        cout<<"its not a three digit number";
    }
}