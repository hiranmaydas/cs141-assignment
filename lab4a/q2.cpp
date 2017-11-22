#include <iostream>
using namespace std;
double dimtr (double a){
	return 2*a;
}
double circum(double a){
	return 3.14159*2*a;
}
double area(double a){
	return 3.14159*a*a;
}
int main() {
	double a;
	cout<<"enter the radius of the circle "<<endl;
	cin >>a;
	cout <<"diameter of the circle is "<<dimtr(a)<<endl;
	cout <<"circumference of the circle is "<<circum(a)<<endl<<"area of the circle is "<<area(a)<<endl;
	return 0;
}