// Write a program to input sides of a triangle and check whether a triangle is
// equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a==b && b==c){
        cout<<"equilateral";
    }
    else if(a==b || b==c || c==a){
        cout<<"isoceles";
    }
    else{
        cout<<"scalene";
    }
}