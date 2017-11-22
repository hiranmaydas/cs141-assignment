#include <iostream>
using namespace std;

int main() {
	int a,b,c;
  cout << "enter the sides of the triangle";
  cin >>a;
  cin >>b;
  cin >>c;
  if (a+b>c && a+c>b && b+c>a){
      cout <<"the triangle is valid"<< endl;
      if (a==b && b==c){
      cout <<"the triangle is equlatarel";
  }
  else if (a==b ||b==c||c==a) {
      cout<< "the triangle is isoscale";
  }
  else {
      cout << "the triangle is scalene";
  }
  }
  else {
      cout<< "the triangle is not valid";
  }
	return 0;
}