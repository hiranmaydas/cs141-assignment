#include <iostream>
using namespace std;

int main() {
	int a,i,b,j=1,c;
 cout <<"enter a number "<<endl;
 cin >>a;
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
	return 0;
}