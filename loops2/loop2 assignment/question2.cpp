// WAP to print the sum of a given number and its reverse.
// Sample Input: 12
// Sample Output: 33 [12+21]

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int lastdigit=0;
    int r=0;
    int original=n;
    while(n>0){
        r=r*10;
        lastdigit=n%10;
        r=r+lastdigit;
        n=n/10;
    }
    cout<<r+original;
}