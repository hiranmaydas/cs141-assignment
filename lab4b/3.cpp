#include <iostream>
using namespace std;
void foo(int i){
	if (i>1){
		cout <<i<<endl;
		foo(i-2);
	}
	else cout <<"1";
}
int main() {
	int a;
	cout <<"enter a number"<<endl;
	cin>>a;
	if (a%2==0){
		cout<<"all even number upto your number"<<endl;
 
	}
		if (a%2==1){
		cout<<"all odd number upto your number"<<endl;
 
	}
 
	foo(a);
 
	return 0;
}