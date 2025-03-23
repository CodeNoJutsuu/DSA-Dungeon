// WAP to print the sum of all the even digits of a given number.
// Sample Input: 4556
// Output: 10

#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        if(lastdigit%2==0){
            sum=sum+lastdigit;
        }
        n=n/10;     
    }
    cout<<sum;
}