#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
 int a,i,b,j,c,n,k=0;
 cout <<"enter a number "<<endl;
 cin >>n;
 for (a=2; a<=n;a++){
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
     k=k+a;
 }
 else continue;
 }
 cout << "the sum of all the prime number till "<< n<< "is "<< k;
 return 0;
}