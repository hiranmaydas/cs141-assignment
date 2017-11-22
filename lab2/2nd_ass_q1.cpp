#include <iostream>
using namespace std;

int main() {
	double length_cm;
	cout << "This is a centimetre to metre converter \n Plese enter a measure in centimetre to convert in metre" <<endl;
	cin >> length_cm;
	cout << " \n the lenght you entered is " << length_cm/100 << " " << "metre";
	return 0;
}