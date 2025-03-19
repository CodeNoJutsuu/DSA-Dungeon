#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=99 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"it is an alphabet";
    }
    else{
        cout<<"it is not an alphabet";
    }
}