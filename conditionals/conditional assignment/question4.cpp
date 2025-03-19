// Given the length and breadth of a rectangle, write a program to find whether
// numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"enter the length:";
    cin>>l;
    cout<<"enter the breadth:";
    cin>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"area is greater than perimeter:"<<area;
    }
    else if(area<perimeter){
        cout<<"perimeter is greater than the area:3"<<perimeter;
    }
    else{
        cout<<"both are equal";
    }
}