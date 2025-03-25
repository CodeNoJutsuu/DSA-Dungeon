// Write a program that will take 2 numbers as input and prints the LCM and HCF
// of those 2 numbers.
//lcm
// #include<iostream>
// using namespace std;
// int main(){
//     int lcm;
//     int m;
//     cout<<"enter the first number";
//     cin>>m;
//     int n;
//     cout<<"enter the second number";
//     cin>>n;
//     int greater;
//     if(m>n){
//         greater=m;
//     }
//     else{
//         greater=n;
//     }
//     while(1){
//         if(greater%m==0 && greater%n==0){
//             lcm=greater;
//             break;
//         }
//         else{
//             greater++;
//         }
//     }
//     cout<<lcm;

// }

//hcf
// #include<iostream>
// using namespace std;
// int main(){
//     int hcf;
//     int m;
//     cout<<"enter the first number";
//     cin>>m;
//     int n;
//     cout<<"enter the second number";
//     cin>>n;
//     int lesser;
//     if(m<n){
//         lesser=m;
//     }
//     else{
//         lesser=n;
//     }
//     while(1){
//         if(m%lesser==0 && n%lesser==0){
//             hcf=lesser;
//             break;
//         }
//         else{
//             lesser--;
//         }
//     }
//     cout<<hcf;

// }