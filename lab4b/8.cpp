#include <iostream>
#include <cmath>
using namespace std;
int foo(int a,int i){
	int j=a/pow(10,i);
	int dgt =j%10;
	if (j>0){
		return dgt + foo(a,i+1);
	}
	else return 0;
	
}
int main() {
	// your code goes here
	int a;
	cout<<"enter a  number to find the sum of it's digit "<<endl;
	cin>>a;
	cout<<"sum of the digits of this number is "<<foo(a,0)<<endl;
	
	return 0;
}