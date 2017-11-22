#include <iostream>
using namespace std;

int main() {
	int i=0,j;
	cout << "enter any natural number";
	cin >>j;
	while (j>0){
	    j=j/10;
	    i++;
	}
	cout << "the nmber of digit is " << i;
	return 0;
}