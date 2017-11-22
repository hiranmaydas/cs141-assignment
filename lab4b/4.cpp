#include <iostream>
using namespace std;
int rec(int a){
	if (a== 0){
		return 0;
	}
	else return a+rec(a-1);
}
int main() {
	int a;
	cout<<"enter a number "<<endl;
	cin>>a;
	cout <<rec(a);
	return 0;
}