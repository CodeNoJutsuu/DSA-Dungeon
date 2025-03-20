// 12. Write a menu-driven program.
// a) Cm to ft
// b) Km to miles
// c) USD to INR
// d) Exit

#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"welcome to converter"<<endl;
    cout<<"enter your choice:"<<endl;
    cout<<"1.cm to ft"<<endl;
    cout<<"2.km to miles"<<endl;
    cout<<"3.usd to inr"<<endl;
    cout<<"4.exit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1: 
            float cm,ft;
            cout<<"enter length in cm:";
            cin>>cm;
            ft=cm/30.48;
            cout<<ft;
            break;
        case 2:
            float km,miles;
            cout<<"enter km:";
            cin>>km;
            miles=km/1.609;
            cout<<miles;
            break;
        
        case 3:
            double usd,inr;
            cout<<"enter amount in usd:";
            cin>>usd;
            inr=usd*86.95;
            cout<<inr;
            break;

        default:
           exit(0);
    }
}