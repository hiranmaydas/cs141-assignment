#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout<< "Enter the marks of the subjects in order.and press 'enter' key after each input" << endl;
	cin >> a >> b >> c >> d >> e;
	cout << " \n Total marks  " << a+b+c+d+e <<"\n average marks "<< (a+b+c+d+e)/5 <<" \n percentage marks" << 
	(a+b+c+d+e)/5 << "%";
	return 0;
}