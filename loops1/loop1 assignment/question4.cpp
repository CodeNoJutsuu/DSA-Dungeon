// Display this GP - 3,12,48,.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=4;
    }
}