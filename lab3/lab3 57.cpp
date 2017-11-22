// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,i=0,j=1,k;
  cout <<"enter a number ";
  cin >>a;
  while (i<a){
      
      k=i+j;
      i=j;
      j=k;
      cout <<j <<" ,";
  }
}
