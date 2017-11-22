#include <iostream>
using namespace std;

int main() {
	 int i,j=1;
	cout << "enter any natural number";
	cin >>i;
	while (j< 11){
	    cout <<i<<"x"<<j<<"\t" <<i*j <<endl;
	    j++;
	}
	return 0;
}