// // 9. Write a program to print all the unique combinations of 1,2,3 and 4
// 1 2 3 4
// 1 2 4 3
// 1 3 2 4
// 1 3 4 2
// 1 4 2 3
// 1 4 3 2
// 2 1 3 4
// 2 1 4 3
// 2 3 1 4
// 2 3 4 1
// 2 4 1 3
// .
// .
// and so, on

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            for(int k=1;k<=4;k++){
                for(int l=1;l<=4;l++){
                    cout<<i<<j<<k<<l<<endl;
                }
            }
        }
    }
}