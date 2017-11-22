#include <iostream>
using namespace std;
int factorial(int );
int main() {
	int i,j,k=0,l;
  cout << "enter a natural number";
  cin >>j;
  int m=j;
  while (j>0)
  {
     i=j%10;
     l=factorial(i);
     j=j/10;
     k=k+l;
  }
  if (k==m){
  cout<< "this is a strong number";
  }
  else cout <<"this is not a strong number";
	return 0;
}
int factorial(int a){
    int i;
    for (i=a;i>1;i--){
        a=a*(i-1);
    }
    return a;
}