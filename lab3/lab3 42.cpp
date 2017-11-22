#include <iostream>
using namespace std;

int main() {
	float a,b;
 int p,q;
 cout<<"enter the base and power in order.power should be integer"<< endl;
 cin >>a;
 cin>>p;
 q=p;
 b=a;
 for (p=1 ; p<q; p++){
     a=a*b;
 }
 cout <<"ans is "<< a;
	return 0;
}