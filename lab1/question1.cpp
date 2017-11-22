#include <iostream>
using namespace std;

int main() {
	int a;
	double b;
	float c;
	bool d;
	char e;
	cout << "enter an integer" <<endl;
	cin >> a;
	cout << "enter a double floating point" << endl;
	cin >> b;
	cout << "enter another floating point"<<endl;
	cin >> c;
	cout << "enter o or 1";
	cin >> d;
	cout << "enter a character" <<endl;
	cin >> e;
	cout << "you have entered this number as integer"<<"\t" << a <<endl <<"and this as double floating point"<<"\t" 
	<< b << endl <<"and this as double point" <<"\t" << c << endl << "this as boolean number "<<"\t" << d <<endl<<"this as charechter" <<"\t" << e;
	// your code goes here
	return 0;
}