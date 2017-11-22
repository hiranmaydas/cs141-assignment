#include <iostream>
#include <cmath>
using namespace std;
int nth(int a, int i){
	int b=  (a/pow (10,i-1));
	return b%10;
}
int main() {
	int a,l,i,k=0;
	cout <<"ente a number"<<endl;
	cin>>a;
	for (i=0; i<14; i++){
		l=nth(a,i);
		k=k+l*l*l*l;
	}
	if (k==a){
		cout<<"the number is armstrong number "<<endl;
	}
	else cout <<"dont worry it is not an armstrong number";
	return 0;
}
