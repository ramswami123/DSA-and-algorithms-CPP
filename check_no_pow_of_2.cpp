#include<iostream>
using namespace std;
bool func(int n){
   return((n!=0)&&(n&(n-1)==0));
}
int main(){
    int x;cin>>x;
    cout<<func(x);
    return 0;
}
//gives outputs 1, if input int is power of 2
