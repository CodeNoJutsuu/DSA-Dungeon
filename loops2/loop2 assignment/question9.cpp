// Take a user input as integer N. Find out the sum from 1 to N. If any number if divisible
// by 5, then skip that number. And if the sum is greater than 300, don't need to calculate
// the sum further more. Print the final result. And don't use for loop to solve this problem.
// Example: Input: 30
// Output: 276

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%5==0){
            i++;
            continue;
        }
        sum=sum+i;
     if(sum>300){
        sum=sum-i;

            break;
        }
        i++;
    }
    cout<<sum;
}