// Display this AP - 4,7,10,13,16.. upto ‘n’ terms

#include<iostream>
using namespace std;
int main(){
    int a=4;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
}