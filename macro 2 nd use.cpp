#include<iostream>
#define Area(l,b)(l*b)//this is type of preprocessor is called macro preprocessor directives
//by this we are definifing value with related parameters
using namespace std;//here l and b are just parameters not fixed variable values
int main()
{
    int l1=5,l2=4,area;
    area=Area(l1,l2);
    cout<<area;
    return 0;//output area:20
}