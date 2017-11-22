#include <iostream>
using namespace std;

int main() {
	int a,i,j;
 cout << "enter an integer";
 cin >>a;
 for(i=1; i<=a; i++){
     j=a%i;
     if (j==0){
         cout<<i<<", ";
     }
     else continue;
 }
	return 0;
}