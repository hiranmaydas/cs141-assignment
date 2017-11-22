#include <iostream>
using namespace std;

int main() {
	double temp_f;
     cout << "It is a Fahrenheit to Celsius converter \n Please enter temperature in Fahrenheit \n";
     cin >> temp_f;
     cout << " \n the tempaerature in Celsius is " << ((temp_f - 32)*5)/9 << " Celsius";
	return 0;
}