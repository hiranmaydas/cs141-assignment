#include <iostream>
using namespace std;
int fact (int a){
	if (a>0){
		return a*fact (a-1);
	}
	else return 1;
	
}
int main() {
	// your code goes here
	int a;
	cout<<"enter a number to find it's factorial"<<endl;
	cin>>a;
	cout<<"factorial of the entered number is "<<fact (a)<<endl;
	return 0;
}