#include <iostream>
using namespace std;
int pow (int a, int i){
	if(i==0){
		return 1;
	}
	else return a*pow(a,i-1);
}
int main() {
	cout << "enter base and index simultanenously"<<endl;
	int a,b;
	cin>>a;
	cin>>b;
	cout<<a<< "to the power "<<b<<"is "<<pow(a,b);
	return 0;
}