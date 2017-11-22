#include <iostream>
using namespace std;

int main() {
	int p;
	float t, r ;
	cout << "enter the principle amount , duration(in terms of year) and rate of interest in order and press enter after every input"<< endl;
	cin >> p >> t >> r;
	cout << "the amount of simple interest is "<< p*t*(r/100) <<endl;
	return 0;
}