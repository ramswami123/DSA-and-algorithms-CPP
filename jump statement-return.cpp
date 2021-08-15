#include<iostream>
using namespace std;
int sum(int a,int b){
    int s;
    s=a+b;
    return s;
}
void print(int p){
    cout<<p;
    return;
}
int main(){
    int s1=9,s2=10;
   int x=sum(s1,s2);
   print(x);
   return 0;//output 19
}
