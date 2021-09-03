#include<iostream>
using namespace std;
namespace krish{
    int a=4;
}
int main(){
    double a=6.8;
    cout<<a<<endl;
    cout<<krish::a;
    return 0;
}