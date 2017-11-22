#include <iostream>
#include <cmath>
using namespace std;
int foo(int a, int i,int n ){
	int dgts =(a/pow (10,i));
	int dgt=dgts%10;
    if (i>=0){
	return dgt*pow(10,n-i)+foo(a,i-1,n);
	}
	else return 0;
}
int nth(int a){
	int i;
	for (i=0;a>0;i++){
		a=a/10;
 
	}
	return i-1;
 
}
 
int main() {
	int a,b;
	cout <<"enter a number"<<endl;
	cin>>a;
	b= nth(a);
	cout<<"reverse of this number is "<<foo(a,b,b)<<endl;
	return 0;
}