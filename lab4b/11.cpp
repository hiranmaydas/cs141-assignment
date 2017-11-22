#include <iostream>
using namespace std;
int gcd(int a, int b,int i){
	int c=a%i;
	int d=b%i;
	if (c==0 && d==0){
		return i;
		
	}
	else gcd (a,b,i-1);
}
int main() {
	// your code goes here
	int a,b;
	cout<<"enter two number to find their gcd"<<endl;
	cin>>a;
	cin>>b;
	cout<<"gcd of this two number is "<<gcd(a,b,b);
	return 0;
}