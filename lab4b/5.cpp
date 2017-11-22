#include <iostream>
using namespace std;
int rec(int a){
	if (a<=0){
		return 0;
	}
	else return a+rec(a-2);
}
int main() {
	int a;
	cout<<"enter a number "<<endl;
	cin>>a;
	if (a%2==0){
		cout<<"sum of all even numbers upto your number"<<endl;
 
	}
		if (a%2==1){
		cout<<"sum of all odd numbers upto your number"<<endl;
 
	}
	cout <<rec(a);
	return 0;
}