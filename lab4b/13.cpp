#include <iostream>
using namespace std;
void prnt_array(char array [], int i,int size){
	if (i<=size){
		cout<<i+1<<" th element of the array is "<< array[i]<<endl;
		prnt_array(array,i+1,size );
	}
}
int main() {
	// your code goes here
	int i=0,size;
	char ch;
	char array[size];
	cout<<"enter elements of the array one by one and press enter enter after each input and to stop your array just put a full stop after entering all the elements"<<endl;
	int j=0;
	while (j==0){
		cin >>ch;
		if (ch!='.'){
		array[i]=ch;
		}
		else j=1;
		i++;
	}
	prnt_array(array,0,i-2);

	return 0;
}
