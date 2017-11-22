#include <iostream>
using namespace std;

int main() {
	 char alp;
	cout << " enter an alphabet to check whether it is vowel or consonent";
	cin >> alp;
	 if ( alp == 'a' || alp== 'e' ||alp== 'i' ||alp== 'o' ||alp== 'u'|| alp == 'A' || alp== 'E' ||alp== 'I' ||alp== 'O' ||alp== 'U'){
	 	cout << "the alphabet is a vowel";
	 }
	 else {
	 	cout << " it is consonent";
	 }
	return 0;
}