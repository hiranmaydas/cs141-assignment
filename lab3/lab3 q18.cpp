#include <iostream>
using namespace std;

int main() {
	float a, b;
  cout << "enter the buying price and selling price in order";
  cin >> a;
  cin >>b;
  if (a<b){
      cout << "you have made profit";
  }
  else if (a>b){
      cout <<"you have losed";
  }
	return 0;
}