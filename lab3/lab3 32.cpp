#include <iostream>
#include <cmath>
using namespace std;

int main() {
	 int i=0,j,k,l;
	cout << "enter any natural number";
	cin >>j;
	k=j;
	while (j>0){
	    j=j/10;
	    i++;
	}
	l=k/pow(10,i-1);
	cout << "the first and last digit is respectively " <<l<<"\t" <<k%10 ;
	return 0;
}