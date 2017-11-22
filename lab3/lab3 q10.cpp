#include <iostream>
using namespace std;

int main() {
	char alp;
	cout << " enter an alphabet to check whether it is upper case or lower case ";
	cin >> alp;
	 if ( alp<91 &&alp >63){
	 	cout << "the alphabet is upper case";
	 }
	 else  if (alp>96 &&alp<123){
	 	cout << " it is lower case";
	 }
	return 0;
}