#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "enter any natural number";
	cin >>i;
	cout<< "the sum of all even natural numbers between 2 and  " << i << "\t"<< 0.5*(i/2)*(4+((i/2)-1)*2);
	return 0;
}