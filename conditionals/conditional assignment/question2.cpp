// Given the radius of the circle predict whether numerically area of this circle is
// larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    float r,area,circumference;
    cout<<"enter the radius:";
    cin>>r;
    area=3.14*r*r;
    circumference=2*3.14*r;
    if(area>circumference){
        cout<<"area is greater:"<<area<<endl;
    }
    else if(area<circumference){
        cout<<"circumference is greater";
    }
    else{
        cout<<"both are equal";
    }


}