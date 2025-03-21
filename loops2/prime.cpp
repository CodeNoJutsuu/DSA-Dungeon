#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1){
        cout<<"its  neither prime nor composite";
    }
    if(flag==true){
        cout<<"its a prime number";
    }
    else{
        cout<<"its a composite number";
    }
}