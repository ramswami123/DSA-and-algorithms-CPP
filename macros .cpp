#include<iostream>
#define LIMIT 5//this is type of preprocessor is called macro preprocessor directives
//by this we are definifing value of LIMIT=5
using namespace std;
int main()
{
    int i;
    for(int i=0;LIMIT>i;i++){
        cout<<i<<" ";
    }
    return 0;//output :0 1 2 3 4
                       
   

}