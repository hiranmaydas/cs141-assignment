#include <iostream>
using namespace std;

int main() {
	char alp;
	cout << " enter an cherecter to check whether it is an alphabet or a special cherecter ";
	cin >> alp;
	 if ( alp<91 &&alp >63 || alp>96 &&alp<123){
	 	cout << "the charecter is an alphabet";
	 }
	 else {
	 	cout << " it is a special cherecter";
	 }
	return 0;
}