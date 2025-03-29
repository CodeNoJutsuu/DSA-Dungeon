#include<iostream>
using namespace std;
void printmax(int a,int b,int c){
    int x=max(a,b);
    int final=max(x,c);
    cout<<final;
}
int main(){
    printmax(90,6,8);
}