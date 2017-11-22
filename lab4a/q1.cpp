#include <iostream>
using namespace std;
double cube (double a){
     double b=a*a*a;
     return b;
}
int main() {
	double a;
	
	cout<<"enter a number to find  the cube"<<endl;
	cin >>a;
	cout <<"cube of this number is "<<cube(a)<<endl;
	return 0;
}