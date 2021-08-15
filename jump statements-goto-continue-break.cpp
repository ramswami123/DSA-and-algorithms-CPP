#include <iostream>
using namespace std;
 
// function to print numbers from 1 to 10
void printNumbers()
{
    int n = 1;
label:
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
}
 
// Driver program to test above function
int main()
{
    printNumbers();
    return 0;
}//1 2 3 4 5 6 7 8 9 10
//function of break and continue same as python but 
//syntax changes

