#include<iostream>
#include<bitset>//to deal with bitset operators
using namespace std;
int main(){
	//create biset and assigning to variable
	bitset<10>b(4);
	//bitset<no.of bits>variable(value/integer)
	//now b is array of binary 4
	//b=0000000100
	cout<<b[7];
	//outputs 1
}
