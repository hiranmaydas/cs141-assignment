#include <iostream>
using namespace std;

int main() {
	double temp_c;
	cout<< "It is a Celsius to Fahrenheit conveter \n Please enter the value in Celsius.";
	cin >> temp_c;
	cout << " \n the temperature in Fahrenheit is " << temp_c*1.8 +32 << " Fahrenheit";
	return 0;
}