// Write a function that takes the radius of a circle as an argument and returns
// its area.

#include<iostream>
using namespace std;

float area(float r){
    float a=3.14*r*r;
    return a;
}
int main(){
    float x=area(4);
    cout<<x;
}