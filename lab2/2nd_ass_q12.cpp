#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int p;
	float t, r,x,y,z ;
	cout << "enter the principle amount , duration(in terms of year) and rate of interest in order and press enter after every input"<< endl;
	cin >> p >> t >> r;
	x=r/100;
	y=1+x;
	z= pow(y,t);
	cout << "the amount of compound  interest is " << p*z <<endl;
	return 0;
}