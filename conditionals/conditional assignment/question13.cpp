#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    char cap=char((int)ch-32);
    cout<<cap;
    return 0;
}