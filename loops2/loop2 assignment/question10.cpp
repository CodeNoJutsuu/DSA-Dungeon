#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"enter the number";
    cin>>n;
    int lastdigit=0;
    int sum=0;
    int p=n;
    while(n>0){
         lastdigit=n%10;
         n=n/10;
         sum=sum+lastdigit*lastdigit*lastdigit;

    }
    if(p==sum){
        cout<<"armstrong number";
    }
    else{
        cout<<"not";
    }

}