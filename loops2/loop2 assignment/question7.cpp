#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int a=1;
    int b=1;
    int sum;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        sum=a+b;
        cout<<sum<<" ";

        a=b;
        b=sum;
    
    }
}