#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x=1.2367,y=3.4567,z=-1.1234;
    cout<<"floor() of x,y,z"<<endl;
    cout<<floor(x)<<endl<<floor(z)<<endl;
    cout<<floor(z)<<endl;
 
    cout<<"ceil() of x,y,z"<<endl;
    cout<<ceil(x)<<endl<<ceil(y)<<endl<<ceil(z)<<endl;

    cout<<"rond() of x,y,z"<<endl;
    cout<<round(x)<<endl<<round(y)
    <<endl<<round(z)<<endl;
    return 0;
//outpt:
/*floor() of x,y,z
1
-2
-2
ceil() of x,y,z
2
4
-1
rond() of x,y,z
1
3
-1*/
    
}
