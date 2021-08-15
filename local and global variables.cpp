#include<iostream>
using namespace std;
int g=8;
int main(){
    int i=7;//local variable for main()
    cout<<"before if block i="<<i<<endl;
    if(1){
        int i=8;//local variable for 'if block'
        cout<<i<<endl;
    }
    cout<<"after if block i="<<i<<endl; 
    cout<<g;//global variable
return 0;
}/*before if block i=7
8
after if block i=7
8*/
