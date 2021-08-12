#include<bitset>              
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=1,c;
    c=a<<b;//(a<<b)==a*(2**b)
    cout<<c;//output c=10
    return 0;

}