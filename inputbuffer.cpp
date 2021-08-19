#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int a;
    char ch[80];
    cin >> a;
    cin.getline(ch,80);//it doesnot take input for char
    //and directly  gives output of int a
    cout << a << endl;
    cout << ch << endl;
    return 0;
}