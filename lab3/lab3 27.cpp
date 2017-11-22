#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "enter a natural number ";
	cin >> n;
	cout << "the sum of all natural number between 1 and " << n << "\t" << 0.5*n*(n+1);
	return 0;
}