#include <iostream>
using namespace std;
int fib(int i,int j, int n){
	if (n-2 > 0){
		int k= i+j;
		i=j;
		j=k;
		fib (i,j,n-1);
	}
	else return j;
}
int main() {
	int i;
	cout<<"enter n to find nth fibbonaski number "<<endl;
	cin>>i;
	cout<< "nth fibonaski number is "<<fib(0,1,i)<<endl;
	return 0;
}