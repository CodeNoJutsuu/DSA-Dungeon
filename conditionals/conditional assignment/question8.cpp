// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all
// the three points fall on one straight line
#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter first cordinate:";
    cin>>x1;
    cin>>y1;
    cout<<"enter second coordinate:";
    cin>>x2;
    cin>>y2;
    cout<<"enter third coordinate:";
    cin>>x3;
    cin>>y3;

    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);

    cout<<m1<<" "<<m2<<endl;

    if(m1=m2){
        cout<<"co-linear";
    }
    else{
        cout<<"non-colinear";
    }
}