#include <iostream>
#include <cmath>
using namespace std;
void check_prime(int a){

	int i,b,j=1,c;

	b=sqrt(a);
 for (i=2; i<=b && j==1;i++){
     c=a%i;
     if (c==0){
         cout<<"the number is not a prime number ";
         j=0;
        }
     else continue;
 }
 if (i>=b){
     cout <<"the number is a prime";
 }
}
   void check_armstrong(int a){
   	int b,c,d;
   	if (a<1000 && a>99){
        b=a/100;
        c=(a%100)/10;
        d=a%10;
        if (a==b*b*b+c*c*c+d*d*d){
            cout <<"the number is an Armstrong number";
        }
        else cout << "it's not an Armstrong number";
    }

   }
	void check_perfect(int a){
		
		int i,j,k=0;
		for(i=1; i<a; i++){
     j=a%i;
     if (j==0){
        k=k+i;
     }
     else continue;
 }
 if (k==a){
     cout<<"this is a perfect number";
 }
 else cout << "this is not a perfect number";
	}
int main() {
	cout<<"enter a number";
	int a;
	cin>>a;
	check_prime(a);
	check_armstrong(a);
	check_perfect(a);
	return 0;

	
}