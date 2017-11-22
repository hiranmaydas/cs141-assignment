#include <iostream>
using namespace std;

int main() {
	 double a, b;
	int i,c;
	i=1;
	cout << "enter the base " <<endl;
	cin >> a;
	b=a;
	cout << "enter the index or power" << endl;
	cin >> c;
	for (;i<= c;){
		b= b*a;
		i++;
	}
	cout << a << "^" << c <<"is equals to " << b/a << endl;
	return 0;
}