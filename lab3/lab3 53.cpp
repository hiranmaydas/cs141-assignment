#include <iostream>
using namespace std;

int main() {
	int a,i,j,k=0;
 cout << "enter an integer";
 cin >>a;
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
	return 0;
}