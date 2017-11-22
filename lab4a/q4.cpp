#include <iostream>
using namespace std;
void check(int a){
	if (a%2==0){
		cout<<"the number is even "<<endl;
	}
	else if (a%2==1){
		cout<<"the number is odd"<<endl;
	}
}
int main() {
	cout <<"enter an integer to check whether it is odd or even "<<endl;
	int a;
	cin >>a;
	check (a);
	return 0;
}