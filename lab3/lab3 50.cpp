#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int a,i,b,j,c,n,x;
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
     x=n%a;
     if (x==0){
     cout <<a<<", ";
     }
     else continue;
 }
 else continue;
 }
 return 0;
}
     