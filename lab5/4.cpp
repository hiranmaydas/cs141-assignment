#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a, b,i;
	cout<<"enter the sizes of the array one after another"<<endl;
	cin>>a;
	cin>>b;
	cout <<"enter the elements of the array"<<endl;
	int arr1[a], arr2[b];
	int arr3[a+b];
	for(i=0;i<a;i++){
		cout<<"enter the "<<i<<"th element of the array1"<<endl;
		int input;
		cin>>input;
		arr1[i]=input;
	}
	for(i=0;i<b;i++){
		cout<<"enter the "<<i<<"th element of the array2"<<endl;
		int input;
		cin>>input;
		arr2[i]=input;
	}
	for (i=0; i<=a+b;i++){
		if (i<a){
			arr3[i]=arr1[i];
		}
		else arr3[i]=arr2[i-a];
	}
	for (i=0; i<a+b; i++){
		cout<<i<<" th element"<<arr3[i]<<endl;
	}
	return 0;
}