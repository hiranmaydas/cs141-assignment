#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c;
  cout << "a quadratic equation should look like"<< "\t" << "ax^2 + bx +c " << "\n" << " just put the value of a , b, c."<< endl;
  cin>> a;
  cin>> b;
  cin>>c;
  cout << "the solution of the quadratic equation is :" << (-b+ sqrt(b*b - 4*a*c))/(2*a) << " and " << (-b- sqrt(b*b -4*a*c))/(2*a);
	return 0;
}