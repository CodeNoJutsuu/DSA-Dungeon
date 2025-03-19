// If the marks of A, B and C are input through the keyboard, write a program to
// determine the student scoring least marks.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b && a<c){
        cout<<"a is smallest";
    } 
    else if(b<a && b<c){
        cout<<"b is smallest";
    }  
    else{
        cout<<"c is smallest";
    } 
}