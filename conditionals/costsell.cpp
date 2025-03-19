#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the cost price:";
    cin>>cp;
    cout<<"enter the selling price:";
    cin>>sp;
    if(cp>sp){
        cout<<"loss of:"<<cp-sp;
    }
    else if(cp<sp){
        cout<<"profit of:"<<sp-cp;
    }
    else{
        cout<<"equal";
    }
}