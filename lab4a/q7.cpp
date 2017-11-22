#include <iostream>
using namespace std;
int factorial(int );
int check( int);
int main(){
    cout <<"enter an interval";
    
    int i,n,j;
    cin >>j;
    cout<<"to "<<endl;
    cin>>n;
    for (i=j;i<n;i++){
        check (i);
        }
        
    return 0;
}
            
    
int check( int v) { //it's the function to check if the number is 
	int i,j,k=0,l;
	j=v;
  int m=j;
  while (j>0)
  {
     i=j%10;
     l=factorial(i);
     j=j/10;
     k=k+l;
  }
  if (k==m){
  cout <<m << " , ";
  }
  return 0;
}
int factorial(int a){ // it is used as a function for factorial;
    int i;
    for (i=a;i>1;i--){
        a=a*(i-1);
    }
    return a;
}