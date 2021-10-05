#include<iostream>
using namespace std;
int set_func(int n){
    int set_count=0;
    while(n!=0){
        n=(n&(n-1));
        set_count++;
    }
    return set_count;
}
int main(){
    int n;cin>>n;
    cout<<set_func(n);
    return 0;
}
