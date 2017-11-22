#include <iostream>
using namespace std;

int main() {
	 int a,i;
 cout << "enter an integer";
 cin >>a;
 for (i=(a-1); i>0; i--){
     a=a*i;
 }
 cout << "factorial of this number is " <<a;
	return 0;
}