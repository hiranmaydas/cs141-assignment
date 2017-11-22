#include <iostream>
using namespace std;

int main() {
	 int a,b,c;
  cout << "enter the angles of the triangle";
  cin >>a;
  cin >>b;
  cin >>c;
  if (a+b+c==180){
      cout <<"the triangle is valid";
  }
  else {
      cout<< "the triangle is not valid";
  }
	return 0;
}