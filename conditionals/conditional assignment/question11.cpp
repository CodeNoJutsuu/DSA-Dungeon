// The minimum angle between hour and minute hand when the time is 9 angle is 90
// degress.

#include<iostream>
using namespace std;
int main(){
    int h,m;
    cout<<"enter hour:";
    cin>>h;
    cout<<"enter minute:";
    cin>>m;

    int h_a=h*30;
    int m_a=m*6;

    int diff=abs(h_a - m_a);

    if(diff>180){
        diff=360-diff;
    }
    cout<<"min angle is:"<<diff;
    return 0;
}