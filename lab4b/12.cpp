#include <iostream>
using namespace std;
int lcm(int a, int b,int i){
	int c=i%a;
	int d=i%b;
	if (c==0 && d==0){
		return i;
 
	}
	else lcm (a,b,i+1);
}
int main() {
	// your code goes here
	int a,b;
	cout<<"enter two number to find their least common multiplier"<<endl;
	cin>>a;
	cin>>b;
	cout<<"lcm of this two number is "<<lcm(a,b,b);
	return 0;
}