// #display gp upto n terms
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=2;
    }
}