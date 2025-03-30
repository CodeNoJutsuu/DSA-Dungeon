// Write a function to count the number of digits in a number and then print the
// square of this number.

#include<iostream>
using namespace std;
void mixed(int n){
    int x=n;
    int count=0;
    if(n==0){
        count=1;
    }
    else{
    while(n>0){
        int lastdigit=n%10;
        count++;
        n=n/10;
    }
    }
    cout<<count<<endl;
    cout<<x*x;

}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    mixed(n);
}