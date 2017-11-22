#include <iostream>
using namespace std;

int main() {
	int i,j,k=0;
  cout << "enter a natural number";
  cin >>j;
  while (j>0)
  {
     i=j%10;
     j=j/10;
     k=k+i;
  }
     
     
  cout<< "the sum of the digits of this number is " << k;
	return 0;
}