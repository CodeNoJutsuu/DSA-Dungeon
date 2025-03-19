//take 2 integer as input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    if(x>y){
        cout<<"x is greater";
    }
    else if(x<y){
        cout<<"y is greater";
    }
    else{
        cout<<"both are equal";
    }
}