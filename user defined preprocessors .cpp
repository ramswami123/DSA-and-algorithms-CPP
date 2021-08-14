#include<iostream>
#define debug
#define volume(l,b,h)(l*b*h)
using namespace std;
int main(){
int a=3,b=9,c=6;
#ifdef debug
cout<<"its working because of #define debug\n";
#endif 
#if 1
 cout<<"works because of #ifdef '1'\n";
#endif
#if 0
 cout<<"no output\n";
#endif 
 cout<<volume(a,b,c)<<endl;
}
 //output
// clang++-7 -pthread -std=c++17 -o main main.cpp
// ./main
//its working because of #define debug
//works because of #ifdef '1'
//162