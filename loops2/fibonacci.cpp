// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int a=1;
//     int b=1;
//     int sum=0;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     cout<<sum;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = 10, y = 0;
    while (x >= y) {  // Condition checked first
        x--;          // x is decremented
        y++;          // y is incremented
        cout << x << " " << y << endl;  // Values printed
    }
}
