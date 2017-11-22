#include <iostream>
using namespace std;
void foo(int i){
	if (i>1){
		cout <<i<<endl;
		foo(i-1);
	}
	else cout <<"1";
}
int main() {
	int a;
	cout <<"enter a number"<<endl;
	cin>>a;
	foo(a);
	
	return 0;
}