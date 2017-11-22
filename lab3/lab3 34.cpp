#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i=0,j,k,l,m;
	cout << "enter any natural number";
	cin >>j;
	k=j;
	while (j>0){
	    j=j/10;
	    i++;
	}
	l=pow(10,i-1);
	m=k%l;
	cout << "swaping the first and last digit new number is   " << m/10 ;
	return 0;
}