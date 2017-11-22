#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int i,j,a,b=0;
	cout<<"enter a binary number ";
    cin>>a;
	int k=a;
	int l=0;
	while (k>0){
	    k=k/10;
	    l++;
	}
    for (i=0 ;i<=l;i++){
    	j=a%10;
    	a=a/10;
    	if(j==0){
    		j=1;
    	}
    	else if (j==1){
    		j=0;
    	
    	}
    	b=b+j*pow(10,i);
 
    }
    cout<< "The one's compliment of the binary number is "<<b;
 
	return 0;
}