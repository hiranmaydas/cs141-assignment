#include <iostream>
using namespace std;
void compare(double a,double b){
	if (a>b){
		cout<<"number 1 is greater than number 2";
	}
	else if (a<b){
		cout<<"number 1 is less than number 2";
	}
	else if (a==b){
		cout <<"both the number is same";
	}
}
int main() {
	cout <<"enter two number as number 1 and number 2"<<endl;
	double a,b;
	cin>>a;
	cin>>b;
	compare(a,b);
	return 0;
}