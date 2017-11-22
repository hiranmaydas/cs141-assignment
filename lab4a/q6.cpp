#include <iostream>
#include<cmath>
using namespace std;
void print_prime(int a1, int b1){
	int a,i,b,j,c;
	cout<<"the prime numbers between "<<a1 <<" and "<<b1<<endl;
	for (a=a1; a<=b1;a++){
	
 b=sqrt(a);
 j=1;
 for (i=2; i<=b && j==1;i++){
     c=a%i;
     if (c==0){
         
         j=0;
        }
     else continue;
 }
 if (j==1){
     cout <<a<<", ";
 }
 else continue;
 }

}
int main() {
	cout<<"enter two number"<<endl;
	int a,b;
	cin >>a;
	cin>>b;
	print_prime(a,b);
	return 0;
}