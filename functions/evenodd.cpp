#include<iostream>
using namespace std;
void evenodd(int a){
    if(a%2==0){
        cout<<"a is even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    int n;
    cin>>n;
    evenodd(n);
}