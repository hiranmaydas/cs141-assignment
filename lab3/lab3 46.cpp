#include <iostream>
using namespace std;

int main() {
	int a,i,b,j=1,c,d;
 cout << "enter two integer";
 cin >>a;
 cin >>b;
 if (a>b){
 for (i=a; i>0 && j!=0; i++){
     c=i%a;
     d=i%b;
     if (c==0 && d==0){
         cout <<"the HCF is  "<<i;
         j=0;
     }
     else continue;
 }
 }
 if (a<b){
 for (i=b; i>0 && j!=0; i++){
     c=i%a;
     d=i%b;
     if (c==0 && d==0){
         cout <<"the HCF is  "<<i;
         j=0;
     }
     
 }
 }
	return 0;
}